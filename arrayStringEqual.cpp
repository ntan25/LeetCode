class Solution {
public:
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
        
        for(int i = 0; i < w1.size(); ++i){
            char a = w1[i]; 
            char b = w2[i]; 
            if(a != b) return false; 
        }
        
        return true; 
}
};