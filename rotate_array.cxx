//hint3
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k && k!=nums.size() && nums.size()>1) {
            if(k>=nums.size()) k%=nums.size();
            std::reverse(nums.begin(),nums.end());
            std::reverse(nums.begin(),nums.begin()+k);
            std::reverse(nums.begin()+k,nums.end());
        } 
    }

    void rotate(vector<int>& nums, int k) { //in place
        for(int i=0;i<k;++i) std::swap(nums[i],nums[nums.size()-k+i]);
        for(int i=0;i<k;++i) std::swap(nums[k+i],nums[nums.size()-k+i]);
    } 
};

//hint4 close but not there yet
/*class Solution {
public:
    void rotate(vector<int>& nums, int k) { //in place
        if(k && k!=nums.size() && nums.size()>1) {
            if(k>=nums.size()) k%=nums.size();
            for(auto l=nums.begin(); l<nums.end()-k+1;) {
                for(auto j=nums.end()-k; j<nums.end(); ++j,++l) {
                    int temp = *l;
                    *l = *j;
                    *j = temp;
                } 
            }
        } 
    }
};*/

/*
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

5->1 end-3->begin   [5,2,3,4,1,6,7]
6->2 end-2->begin+1 [5,6,3,4,1,2,7]
7->3 end-1->begin+2 [5,6,7,4,1,2,3]
1->4 end-3->begin+3 [5,6,7,1,4,2,3]
2->4 end-2->begin+4 [5,6,7,1,2,4,3]
3->4 end-1->begin+5 [5,6,7,1,2,3,4]
7-3+1=5
2 loops, k = 3, size = 7

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
3->-1
99->-100
3,99,-1,-100
1 loop, k = 2, size = 4 

Input: nums = [1,2,3,4,5,6,7], k = 2
Output: [6,7,1,2,3,4,5]
6->1
7->2
6,7,3,4,5,1,2
1->3
2->4
6,7,1,2,5,3,4
3->5
4->5
3 loops, k = 2, size = 7

in [1,2,3] k=4
out [3,1,2]
3 1 2
2 3 1
1 2 3
3 1 2

3->1 [3,2,1]
2->1 [3,1,2]

in: [1,2,3,4,5,6] k=4
end-4->begin [3,2,1,4,5,6]
end-3->begin+1 [3,4,1,2,5,6]
end-2->begin+2 [3,4,5,2,1,6]
end-1->begin+3 [3,4,5,6,1,2]
6-4+1=3

[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27] k=38
38 % 27 = 11
*/
