class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0,j=0;
        int n = s.length();
        int ans = 0;

        unordered_set<char> seen;

        while(j<n){
            if(seen.find(s[j])== seen.end()){
                seen.insert(s[j]);
                ans = max(ans,j-i+1);
                j++;

            }else{
                seen.erase(s[i]);
                i++;
                
            }
        }
        return ans;
    }
};
