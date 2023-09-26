class Solution {
public:
    /*int strStr(string haystack, string needle) {
        int f0;
        if((f0=haystack.find(needle)) == string::npos) f0=-1;
        return f0;
    }*/

    int strStr(string haystack, string needle) {
        int f0=-1; //scope
        for(int i=0; i<haystack.size() && f0==-1; ++i) { //watch increment
            int k=i; //brutal
            for(auto j=needle.begin(); j!=needle.end(); ++j) {
                if(*j!=haystack[k]) {f0=-1; break;} 
                if(f0==-1) f0=k;
                if(++k==haystack.size()) {
                    if(j!=needle.end()-1) f0=-1;
                    break;
                };
            }
        }
        return f0;
    }   

    int strStr(string haystack, string needle) {
        int f0=-1; //scope
        //for(int i=0; i<=haystack.size()-needle.size(); ++i) { size_t blows up if haystack < needle
        int m = haystack.size(), n = needle.size(); //int needed if haystack < needle
        for(int i=0; i<=m-n; ++i) {
            int j=0; //scope
            for(; j<n; ++j) {
                if(needle[j]!=haystack[i+j]) break;
                }
            if(j==needle.size()) {
                f0=i;
                break;
            }
        }
        return f0;
    }    
};
