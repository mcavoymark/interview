class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        cnt=0
        i=1
        while i<len(nums):
            if nums[i]==nums[i-1]:
                cnt+=1
                if cnt>1: 
                    nums.pop(i)
                else:
                    i+=1
            else:
                cnt=0
                i+=1
        return len(nums)
