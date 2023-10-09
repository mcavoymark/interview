class Solution {
public:
    #if 0
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> out; 
        for(int i=0; i<nums.size(); ++i) {
            if(i && nums[i]==nums[i-1]) continue; //repeat
            for(int l=i+1, r=nums.size()-1; l<r; ) { //while
                int sum = nums[i] + nums[l] + nums[r];
                if(sum<0) ++l;
                else if(sum>0) --r;
                else {
                    out.push_back({nums[i], nums[l], nums[r]});
                    for( ; l<r && nums[l]==nums[l+1]; ++l);
                    for( ; l<r && nums[r]==nums[r-1]; --r);
                    ++l;
                    --r;
                }
            }
        }
        return out;
    }
    #endif
          
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> out; 
        for(auto i=nums.begin(); i!=nums.end(); ++i) {
            if(i>nums.begin() && *i==*(i-1)) continue; //repeat
            for(auto l=i+1, r=nums.end()-1; l<r; ) { //while
                int sum = *i + *l + *r;
                if(sum<0) ++l;
                else if(sum>0) --r;
                else {
                    out.push_back({*i, *l, *r});
                    for(; l<r && *l==*(l+1); ++l);
                    for(; l<r && *r==*(r-1); --r);
                    ++l;
                    --r;
                }
            }
        }
        return out; 
    }
};
