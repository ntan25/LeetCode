#include <iostream> 
#include <cmath> 
#include <set> 
#include <map> 
#include <vector> 


using namespace std; 


void helper(vector<vector<int>>& a, vector<int> part, int n, int k){
        if(part.size() == k){
            a.push_back(part); 
            part.pop_back(); 
            return; 
        }
        else{
            for(int i = 1; i <= n; ++i){
            part.push_back(i); 
            helper(a, part, n, k); 
            part.pop_back(); 
        }
        }
    }


vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res; 
        vector<int> b;
        helper(res, b, n, k); 
        return res; 
}

int main(int argc, char* argv[]){

    vector<int> t = {1, 1, 2}; 

    vector<vector<int> > d = combine(4, 2); 

    for(int i = 0; i < d.size(); ++i){
        for(int j = 0; j < d[i].size(); ++j){
            cout << d[i][j] << " "; 
        }
        cout << endl; 
    }



    return 0; 
}

