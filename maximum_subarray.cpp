class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return helper(nums, nums.size()); 
    }

    int helper(vector<int>& nums, int size){
        if(size == 1) return nums[0]; 
        int mid = size / 2; 

        vector<int> left_arr(nums.begin(), nums.begin() + mid); 
        vector<int> right_arr(nums.begin() + mid, nums.end()); 

        int left_max = helper(left_arr, left_arr.size()); 
        int right_max = helper(right_arr, right_arr.size()); 

        int leftS = INT_MIN, rightS = INT_MIN, sum = 0; 
        for(int i = mid; i < size; ++i){
            sum += nums[i]; 
            rightS = max(rightS, sum); 
        }
        sum = 0; 
        for(int i = mid-1; i >= 0; --i){
            sum += nums[i]; 
            leftS = max(leftS, sum); 
        }
        int ans = max(left_max, right_max); 
        return max(ans, leftS + rightS); 
    }
};