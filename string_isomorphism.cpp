class Solution {
public:
    bool isIsomorphic(string s, string t) {
        std::map<char, int> s_map; 
        std::map<char, int> t_map; 
        
        for(int i = 0; i < s.length(); ++i){
            auto it_s = s_map.find(s[i]); 
            auto it_t = t_map.find(t[i]); 
            if(it_s == s_map.end() && it_t == t_map.end()){
                s_map.insert(std::make_pair(s[i], t[i])); 
                t_map.insert(std::make_pair(t[i], s[i])); 
            }
            else{
                if(!(it_s->first == it_t->second && it_t->first == it_s->second)){
                    return false; 
                }
            }
            
        }
        
        return true; 
        
    }
};
