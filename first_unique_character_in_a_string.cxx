class Solution {
public:
    int firstUniqChar(string s) {
        
        /*std::unordered_set<char> s0;
        s0.insert(s.begin(),s.end());
        std::vector<int> v0;
        for(auto i : s0) {
            std::size_t idx=s.find(i);
            if(s.find(i,idx+1)==std::string::npos) v0.push_back(idx);
        }
        return (v0.size() ? *std::min_element(v0.begin(),v0.end()) : -1);*/
        
        /*std::unordered_map<char,int> m0;
        for(auto i : s) {
            m0[i]++;
        };
        std::string str;
        for(auto const& [key,value] : m0) {
            if(value==1) {
                str += key;
            }
        }
        return str.size() ? s.find_first_of(str) : -1;*/

        std::unordered_map<char,int> m0;
        for(auto i : s) m0[i]++;
        int ret=-1;
        for(int i=0; i<s.size(); ++i) {
            if(m0[s[i]]==1) {
                ret=i;
                break;
            }
        }
        return ret;
        
        /*std::vector<int> c0(26);
        for(auto i : s) c0[i-'a']++;
        int ret=-1;
        for(int i=0; i<s.size(); ++i) {
            if(c0[s[i]-'a']==1) {
                ret=i;
                break;
            }
        }
        return ret;*/
    }
};
