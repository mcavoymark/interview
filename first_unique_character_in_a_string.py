class Solution:
    def firstUniqChar(self, s: str) -> int:
        m0 = collections.Counter(s)
        ret = -1
        for i in range(len(s)):
            if m0[s[i]]==1:
                ret = i
                break
        return ret;
