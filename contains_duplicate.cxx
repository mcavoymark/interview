class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return std::set<int> (nums.begin(),nums.end()).size() != nums.size();
    }
    
    /*bool containsDuplicate(vector<int>& nums) {
        std::map<int,int> d0;
        for(auto i : nums){
            //!d0.count(i) ? d0[i]=1 : return true;
            if(!d0.count(i)) {
                d0[i]=1;
            } else {
                return true;
            }
        }
    return false;
    }*/
};
