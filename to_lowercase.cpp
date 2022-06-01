class Solution {
public:
    string toLowerCase(string s) {
        string res = "";
        int i = 0; 
        while(s[i]){
            res += tolower(s[i]);
            ++i; 
        }
        return res; 
    }
};