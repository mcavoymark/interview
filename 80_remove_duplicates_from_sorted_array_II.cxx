class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0;
        for(auto i=++nums.begin(); i!=nums.end(); ) {
            if(*i == *(i-1)) {
                ++cnt>1 ? nums.erase(i) : ++i;
            } else {
                cnt=0;
                ++i;
            }
        }
        return nums.size();
    }
};
