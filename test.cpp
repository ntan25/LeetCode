#include <iostream> 
#include <cmath> 
#include <set> 
#include <map> 
#include <vector> 


using namespace std; 


vector<vector<int> > permuteUnique(vector<int>& nums) {
        std::set<vector<int> > res; 
        // helper(res, nums, nums.size()); 
        // vector<vector<int>> v(res.begin(), res.end());
        // return v; 
        do{
            res.insert(nums);
        }while(std::next_permutation(nums.begin(), nums.end()));
        
        vector<vector<int> > res_vec(res.begin(), res.end()); 
        return res_vec; 
}

int main(int argc, char* argv[]){

    vector<int> t = {1, 1, 2}; 

    vector<vector<int> > d = permuteUnique(t); 

    for(int i = 0; i < d.size(); ++i){
        for(int j = 0; j < d[i].size(); ++j){
            cout << d[i][j] << " "; 
        }
        cout << endl; 
    }



    return 0; 
}

