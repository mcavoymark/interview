class Solution:
    #def canJump(self, nums: List[int]) -> bool:
    #    i=0
    #    jump=0
    #    while i<len(nums) and i<=jump:
    #        jump = max(i+nums[i],jump)
    #        i+=1
    #    return i==len(nums)

    def canJump(self, nums: List[int]) -> bool:
        jump=0
        for i,v in enumerate(nums):
            if i>jump: return False
            jump = max(i+v,jump)
        return True
