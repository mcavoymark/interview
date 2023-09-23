class Solution:

    #def isAnagram(self, s: str, t: str) -> bool:
    #    return collections.Counter(s) == collections.Counter(t)
    
    #def isAnagram(self, s: str, t: str) -> bool:
    #    return sorted(s) == sorted(t)
    
    #def isAnagram(self, s: str, t: str) -> bool:
    #    c0 = [0] * 26
    #    for i in s: c0[ord(i)-ord('a')]+=1
    #    for i in t: c0[ord(i)-ord('a')]-=1
    #    return all(i==0 for i in c0)
    
    def isAnagram(self, s: str, t: str) -> bool:
        c0 = collections.defaultdict(int)
        for i in s: c0[i]+=1
        for i in t: c0[i]-=1
        return all(i==0 for i in c0.values())
