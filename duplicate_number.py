class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        idx = nums[0]
        
        while nums[idx] != 0: 
            temp = idx
            idx = nums[temp]
            nums[temp] = 0
        
        return idx