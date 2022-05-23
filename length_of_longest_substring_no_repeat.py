class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        res = set() 
        left = 0 

        retval = 0
        

        for i in range(len(s)): 
            while s[i] in res: 
                res.remove(s[left])
                left += 1

            res.add(s[i])
            retval = max(retval, i - left + 1)

        return retval 
