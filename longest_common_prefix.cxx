class Solution {
public:
    /*string longestCommonPrefix(vector<string>& strs) {
        auto smin = *std::min_element(strs.begin(), strs.end(), 
            [] (const std::string& s1, const std::string& s2) {return std::min(s1.size(),s2.size());});        
        
        std::string out;
        for(int i=0; i<smin.size(); ++i) {
            int j=1; //scope
            for(; j<strs.size(); ++j) {
                if(strs[j][i]!=strs[0][i]) break;    
            } 
            if(j==strs.size()) out+=strs[0][i]; else break;
        }   
        return out;
    }*/
    
    string longestCommonPrefix(vector<string>& strs) {
       //Find lexographic extremes. Not necessarily the shortest or longest strings. 
       const auto [close, far] = std::minmax_element(strs.begin(),strs.end());
       std::string a = *close, b = *far; 
       int i=0; //scope 
       for( ;i<a.size();++i) {
           if(a[i]!=b[i]) break;
       }
       return a.substr(0,i); 
    }
};
