class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d0 = {}
        for i in range(len(nums)):
            val = target - nums[i]
            if val in d0:
                return [d0[val],i]    
            d0[nums[i]]=i
        return []
