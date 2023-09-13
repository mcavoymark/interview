class Solution {
public:
    #if 0
    //brute force
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); ++i) {
            int value = target - nums[i];
            for(int j=i; ++j<nums.size();) {
                if(nums[j]==value) {
                    return std::vector<int>{i,j};
                } 
            }  
        }
        return {};
    }
    #endif

    //hash table, one pass
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> m0;
        for(int i=0; i<nums.size(); ++i) {
            int value = target - nums[i];
            if(m0.count(value)) {
                return {m0[value],i};
            }
            m0[nums[i]]=i;
        }
        return {};
    }
