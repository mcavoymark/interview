class Solution {
public:
    /*bool isPalindrome(string s) {
        std::erase_if(s,[](char const &c) {return !std::isalnum(c);});
        std::transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return std::tolower(c);});
        auto t = s;
        std::reverse(t.begin(),t.end());
        return s == t;
    }*/
    
    bool isPalindrome(string s) {
        bool ret=true;
        for(auto i=s.begin(),j=s.end()--; i<j; ++i,--j) {
            for(;i<j && !std::isalnum(*i); ++i); //shorthand while loop
            for(;i<j && !std::isalnum(*j); --j); //shorthand while loop
            if(std::tolower(*i)!=std::tolower(*j)) {
                ret=false;
                break;
            }    
        }
        return ret;
    }
};
