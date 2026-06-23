class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        
        unordered_map<char,int> s_map,t_map;
        for(char c:s){
            
                s_map[c]++; 
            
        }

         for(char c:t){
            
                t_map[c]++; 
            
        }

        for(char c:s){
            if(s_map[c]!= t_map[c]){
                return false;
            }
        }
        return true;
    }
};
