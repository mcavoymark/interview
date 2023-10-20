class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums)==1: return 0
        cnt, jump, loc = 0, 0, 0
        for i,v in enumerate(nums[:-1]):
            jump = max(i+v,jump)
            if i==loc:
                cnt+=1
                if loc==(len(nums)-1): break
                loc=jump
        return cnt
