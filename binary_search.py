class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        if len(nums) == 1 and nums[0] == target:
            return 0
        
        nums.sort()
        
         
        left = 0 
        right = len(nums) - 1
        
        
        while(left <= right):
            mid = (left + right) // 2
            if nums[mid] == target: 
                return mid
            elif nums[mid] < target: 
                left = mid + 1
            else:
                right = mid - 1
            
        return -1