class Solution {
public:
    
    /* first solution
    int removeDuplicates(vector<int>& nums) {
        std::set<int> s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        return s.size();   
    }*/
    
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for( auto unique=nums.begin(), i=nums.begin(); ++i!=nums.end(); ) {
            if(*unique!=*i) {
                *++unique=*i;
                k++;
            }
        }
        return k;
    }
    
};
