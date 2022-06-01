void helper(vector<vector<int>>& a, vector<int> part, int n, int k){
        if(part.size() == k){
            a.push_back(part); 
            return; 
        }
        for(int i = 1; i <= n; ++i){
            part.push_back(i); 
            helper(a, part, n, k); 
        }
    }


vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res; 
        vector<int> b;
        helper(res, b, n, k); 
        return res; 
}