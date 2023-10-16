class Solution:
    #def singleNumber(self, nums: List[int]) -> int:
    #    single = 0
    #    for i in nums: single ^= i
    #    return single
    
    def singleNumber(self, nums: List[int]) -> int:
        return functools.reduce(operator.xor, nums)
