class Solution {
public:
    /*bool isAnagram(string s, string t) {
        std::map<char,int> s0,t0;
        for(auto i : s) s0[i]++;
        for(auto i : t) t0[i]++;
        return s0.size()==t0.size() && std::equal(s0.begin(),s0.end(),t0.begin());
    }*/
    
    /*bool isAnagram(string s, string t) {
        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());
        return s==t;
    }*/
    
    /*bool isAnagram(string s, string t) {
        std::unordered_map<char,int> c0;
        for(auto i : s) c0[i]++;
        for(auto i : t) c0[i]--;
        for(auto i : c0) {
            if(i.second) return false;
        }
        return true;
    }*/
    
    bool isAnagram(string s, string t) {
        std::vector<int> c0(26);
        for(auto i : s) c0[i-'a']++;
        for(auto i : t) c0[i-'a']--;
        //return std::accumulate(c0.begin(),c0.end(),0) ? false : true;
        for(auto i : c0) {
            if(i) return false;
        }
        return true;
    }
};
