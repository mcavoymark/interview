class Solution {
public:
    //elegant
    int singleNumber(vector<int>& nums) {
        return std::accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
    }
    
    //brute force
    /*int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        std::unordered_map<int,int> m0(nums.size()/2+1);
        
        //linear search, not the most efficient, but easy to implement
        for(auto i : nums) {
            //if((auto it=m0.find(i))==m0.end()) {
            auto it=m0.find(i);
            if(it==m0.end()) {
                m0[i] = 1;
            } else {
                it->second = 2 ;
            }  
        }
        auto i=m0.begin();
        for(; i!=m0.end(); ++i) {
            if(i->second==1) break;
        }
        return i->first;
    }*/
};
