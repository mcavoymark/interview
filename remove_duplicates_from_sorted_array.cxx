class Solution {
public:
    
    //not in-place, pure C++, bit bigger than the two below. set uses a binary search
    int removeDuplicates(vector<int>& nums) {
        std::set<int> s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        return s.size();   
    }
    
    //in-place, linear search   
    /*int removeDuplicates(vector<int>& nums) {
        int k=1;
        for( auto unique=nums.begin(), i=nums.begin(); ++i!=nums.end(); ) {
            if(*unique!=*i) {
                *++unique=*i;
                k++;
            }
        }
        return k;
    }*/
    
    //in-place, binary search
    /*int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(auto unique=nums.begin(), i=nums.begin();;){
            i = std::upper_bound(i,nums.end(),*i);
            if(i==nums.end()) {
                break;
            } else {
                *++unique=*i;
                k++;
            }
        }
        return k;
    }*/
    
};
