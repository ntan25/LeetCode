class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss; 
        string a;
        string c; 
        ss << x; 
        a = ss.str(); 
        c = a; 
        reverse(a.begin(), a.end()); 
        return (c == a); 
    }
};