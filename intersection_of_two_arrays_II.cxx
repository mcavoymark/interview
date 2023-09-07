class Solution {
public:
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
    
    /*vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::map<int,int> m0;
        vector<int> inter;
        for(auto i=nums1.begin(); i!=nums1.end(); ++i) {
            m0[*i]++;
        }
        for(auto i=nums2.begin(); i!=nums2.end(); ++i) {
            if(m0[*i]) {
                inter.push_back(*i);
                m0[*i]--;
            }
        }
        return inter;
    }*/
    
    /*vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::map<int,int> m0;
        vector<int> inter;
        auto ns=nums1, nl=nums2;
        if(nums1.size()>nums2.size()){
            nl=nums1;
            ns=nums2;
        }
        for(auto i=ns.begin(); i!=ns.end(); ++i) {
            m0[*i]++;
        }
        for(auto i=nl.begin(); i!=nl.end(); ++i) {
            if(m0[*i]) {
                inter.push_back(*i);
                m0[*i]--;
            }
        }
        return inter;
    }*/
    
    /*vector<int> intersect(vector<int>& nums1, vector<int>& nums2) { 
        auto ns=nums1, nl=nums2;
        if(nums1.size()>nums2.size()){
            nl=nums1;
            ns=nums2;
        }
        std::map<int,int> m0;
        for(auto i : ns) {
            m0[i]++;
        }
        vector<int> inter;
        for(auto i : nl) {
            if(m0[i]-- > 0) {
                inter.push_back(i);
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

    //pure C++, no crush
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        vector<int> inter;
        //std::set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), inter.begin());
        std::set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), std::back_inserter(inter));
        return inter;
    }
    
};
