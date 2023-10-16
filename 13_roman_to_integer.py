class Solution:
    def romanToInt(self, s: str) -> int:
        symval = {  'I':1,
                    'V':5,
                    'X':10,
                    'L':50,
                    'C':100,
                    'D':500,
                    'M':1000} 
        out=0
        previous=0
        for i in s[::-1]:
            if symval[i] >= previous:
                out += symval[i]
            else:
                out -= symval[i]
            previous = symval[i]
        return out
