class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        std::set<vector<int>> res; 
        // helper(res, nums, nums.size()); 
        // vector<vector<int>> v(res.begin(), res.end());
        // return v; 
        std::sort(nums.begin(), nums.end()); 
        do{
            res.insert(nums);
        }while(std::next_permutation(nums.begin(), nums.end()));
        
        vector<vector<int>> res_vec(res.begin(), res.end()); 
        return res_vec; 
    }
};