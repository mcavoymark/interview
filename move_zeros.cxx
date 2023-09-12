class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto j = nums.begin();
        for(auto i : nums) {
            if(!i) continue;
            *j++ = i;
        }
        std::fill(j,nums.end(),0);
    }
};
