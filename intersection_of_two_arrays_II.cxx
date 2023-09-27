class Solution {
public:
    //no crush
    /*vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        vector<int> inter;
        for(auto i=nums1.begin(),j=nums2.begin();  i!=nums1.end()&&j!=nums2.end();) {
            if(*i==*j) {
                inter.push_back(*i);
                ++i;++j;
            } else if(*i<*j) {
                ++i;
            } else if(*i>*j) {
                ++j;
            }
        }
        return inter;
    }*/
    

    
    //pure C++, crushes nums1
    /*vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        nums1.erase(std::set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums1.begin()), nums1.end());
        return nums1;
    }*/

    #if 0
    //sorted
    public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(),nums1.end());
        std::sort(nums2.begin(),nums2.end());
        std::vector<int> v0;
        std::set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),std::back_inserter(v0));
        return v0;
    }
    #endif
    
    #if 0
    //map
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        auto n1 = nums1, n2=nums2;
        if(nums1.size()>nums2.size()) {
           n1=nums2; n2=nums1; 
        }
        std::unordered_map<int,int> m0;
        for(auto i : n1) m0[i]++;
        std::vector<int> v0; //scope
        for(auto i : n2) {
            if(m0[i]-- >0) {
                v0.push_back(i);
            }
        }
        return v0;
    }
    #endif
    #if 0
    //nums1<nums2, no sort
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        auto n1 = nums1, n2=nums2;
        if(nums1.size()>nums2.size()) {
           n1=nums2; n2=nums1; 
        }
        std::vector<int> v0; //scope
        for(auto i=n1.begin(); i!=n1.end(); ++i) {
            for(auto j=n2.begin(); j!=n2.end(); ++j) {
                if(*i==*j) {
                    v0.push_back(*j);
                    n2.erase(j);
                    break; 
                } 
            }
        } 
        return v0;
    }
    #endif
    //nums2 one element at a time, crush nums1
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> v0; //scope
        for(auto i=nums2.begin(); i!=nums2.end(); ++i) { //pretend one element at a time
            for(auto j=nums1.begin(); j!=nums1.end(); ++j) {
                if(*i==*j) {
                    v0.push_back(*j);
                    nums1.erase(j);
                    break; 
                } 
            }
	    if(!nums1.size()) break;
        } 
        return v0;
    }
};
