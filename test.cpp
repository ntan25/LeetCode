#include <iostream> 
#include <cmath> 
#include <set> 
#include <map> 
#include <vector> 
#include <string>


using namespace std; 


bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 = ""; 
        string w2 = ""; 
        for(int i = 0; i < word1.size(); ++i){
            w1 += word1[i]; 
        }
        for(int i = 0; i < word2.size(); ++i){
            w2 += word2[i]; 
        }
        
        if(w1.size() != w2.size()) return false; 
        
        for(int i = 0; i < word1.size(); ++i){
            if(w1[i] != w2[i]){
                return false; 
            }
            else{
                continue; 
            }
        }
        
        return true; 
}

int main(int argc, char* argv[]){

    vector<string> o{"wxgdwznoledlfeoilewsjziotnncyebhwpdnnimcorzovuiig", "lycfb"}; 
    vector<string> q{"wxgdwznoledlfeoilewsjzio", "tnncyebhwpdnnimcor", "iigl","yc","f","b","hnjm"}; 

    cout << arrayStringsAreEqual(o, q) << endl; 



    return 0; 
}


