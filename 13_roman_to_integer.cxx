class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char,int> symval;
        symval['I'] = 1;
        symval['V'] = 5;
        symval['X'] = 10;
        symval['L'] = 50;
        symval['C'] = 100;
        symval['D'] = 500;
        symval['M'] = 1000;
        
        int out=0;
        for(auto i=s.begin(); i<s.end(); ++i) {
            if(symval[*i]<symval[*(i+1)]) {
                out+= symval[*(i+1)]-symval[*i];
                ++i;
            } else {
                out += symval[*i];
            }
        }
        return out;
    }
};
