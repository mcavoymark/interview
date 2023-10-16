class Solution {
public:
    /*int majorityElement(vector<int>& nums) {
        std::nth_element(nums.begin(), nums.begin()+nums.size()/2, nums.end());
        return nums[nums.size()/2];
    }*/

    int majorityElement(vector<int>& nums) {
        std::unordered_map<int,int> cnt;
        for(auto i : nums) {
            if(++cnt[i] > nums.size()/2) return i;
        }
        return 0;
    }
};
