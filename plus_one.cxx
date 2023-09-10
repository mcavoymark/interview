class Solution {
public:
    
    /*vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(auto i=digits.end(); --i>=digits.begin();) {
            if(((*i)+=carry) == 10) {
                *i=0;
                carry=1;
            } else {
                carry=0;
            }            
        }
        if(carry) digits.emplace(digits.begin(),carry); 
        return digits;
    }*/
    
    /*vector<int> plusOne(vector<int>& digits) {
        auto i=digits.end(); //for scope
        while(--i>=digits.begin()) {
            if(*i < 9) {
                (*i)++;
                break;
            }
            *i=0;
        }
        if(i<digits.begin()) digits.emplace(digits.begin(),1);
        return digits;
    }*/
    
    vector<int> plusOne(vector<int>& digits) {
        for(auto i=digits.end(); --i>=digits.begin();) {
            if(++*i < 10) break;
            *i=0;
        }
        if(!digits.front()) digits.emplace(digits.begin(),1);
        return digits;
    }
};
