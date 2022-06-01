class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       
        //probs binary search
        int low = 0; 
        int high = nums.size(); 
        int mid;
        
        if(target < nums[0]) return 0; 
        if(target > nums[nums.size() - 1]) return nums.size(); 
        
        while(low <= high){ 
            mid = (low + high) / 2; 
            if(nums[mid] == target){
                 return mid; 
            }
            else if (nums[mid] < target){ 
                low = mid + 1; 
            }
            else{
                high = mid - 1; 
            }
        } 
        if(nums[mid] > target) return mid; 
        else return mid + 1;   
    }
};