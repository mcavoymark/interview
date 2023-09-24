class Solution {
public:
    int myAtoi(string s) {
        
        auto i=s.begin(); //for scope
        //Step 1
        for(; *i==' ' && i!=s.end(); ++i); //shorthand while to increment past whitespace
        
        //Step 2
        int flag=1;
        if(*i=='+') ++i;
        else if(*i=='-') {++i;flag=-1;}
        
        //Step 3
        int out=0; //for scope
        for(;*i>='0' && *i<='9' && i!=s.end(); ++i) {
            int num = *i-'0';
            if(out > (INT_MAX-num)/10) {
                out = flag>0 ? INT_MAX : INT_MIN;
                break;
            }
            out = out*10 + num;
        }
        return flag>0 || out<0 ? out : -out;
    }
};
