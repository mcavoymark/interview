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

    /*int removeDuplicates(vector<int>& nums) {
        int k=0; //scope
        for(auto i=nums.begin(); ++i!=nums.end();) { //start on second element
           if(*i!=nums[k]) {
               nums[++k]=*i;
           }
        }
        return ++k; //index to count
    }*/
    /*int removeDuplicates(vector<int>& nums) {
        int k=1; //scope
        for(int i : nums) {
           if(i!=nums[k-1]) {
               nums[k++]=i;
           }
        }
        return k;
    }*/
    int removeDuplicates(vector<int>& nums) {
        for(auto i=++nums.begin(); i!=nums.end();) { //start on second element
           //std::cout<<"nums=";for(int k : nums) std::cout<<k<<" ";std::cout<<std::endl;
           //std::cout<<"i="<<*i<<" i-1="<<*(i-1)<<std::endl;
           if(*i==*(i-1)) {
               nums.erase(i-1);
           } else {
               i++;
           }
       } 
       return nums.size();
    }
    
};
