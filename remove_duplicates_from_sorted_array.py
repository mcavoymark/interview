#!/usr/bin/env python3

from typing import List

class Solution:

    #not in-place
    def removeDuplicates1(self, nums: List[int]) -> int:
        nums[:] = list(sorted(set(nums)))

    def removeDuplicates2(self, nums: List[int]) -> int:
        if len(nums)==1:
            return 1
        j=0 #unique
        for i in range(1,len(nums)):
            if nums[i] != nums[j]:
                j += 1
                nums[j]=nums[i]
        return j+1

if __name__ == "__main__":

    nums = [1, 1, 2]
    s0 = Solution().removeDuplicates1(nums)
    print(f'here1a nums={nums}')

    nums = [1, 1, 2]
    s0 = Solution().removeDuplicates2(nums)
    print(f'here1b nums={nums}')
