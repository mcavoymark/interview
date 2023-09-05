class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        i0=0
        for i in nums:
            i0 ^= i
        return i0
