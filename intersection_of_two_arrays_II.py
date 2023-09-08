class Solution:
    #nonlanguage solution, crude but single pass
    #def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
    #    nums1.sort()
    #    nums2.sort()
    #    i = j = 0
    #    inter=[]
    #    while i<len(nums1) and j<len(nums2):
    #        if nums1[i] == nums2[j]:
    #            inter.append(nums1[i])
    #            i+=1
    #            j+=1
    #        elif nums1[i]<nums2[j]:
    #            i+=1
    #        else:
    #            j+=1
    #    return inter
    
    #using a map
    #def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
    #    if len(nums1) < len(nums2):
    #        nums1,nums2 = nums2,nums1
    #    c1 = collections.Counter(nums1)
    #    inter = []
    #    for i in nums2:
    #        if c1[i]:
    #            inter.append(i)
    #            c1[i] -= 1
    #    return inter

    #pure python
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        return (collections.Counter(nums1) & collections.Counter(nums2)).elements()    
