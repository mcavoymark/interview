class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = [i for i in s.lower() if i.isalnum()]
        return all(s[i] == s[~i] for i in range(len(s) // 2))
    
    #def isPalindrome(self, s: str) -> bool:
    #    s = [i for i in s.lower() if i.isalnum()]
    #    return s == s[::-1]


# remove non alphanumeric -> lowercase -> reverse -> equate
# start from beginning and end, skip non alphanumeric, check char by char tolower till we hit middle
