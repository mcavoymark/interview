classSolution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int cnt=0;
        for(int jump=0,loc=0,i=0; i<nums.size()-1 && loc<nums.size()-1; ++i) {
            jump = max(i+nums[i],jump);
            if(i==loc) {
                loc=jump;
                cnt++;
            } 
        }
        return cnt;
    }
};
