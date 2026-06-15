class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>mp;
        int start = 0;
        int maxlength = 0;
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            if(mp.find(c) != mp.end() && mp[c] >= start){
                start = mp[c]+1;
            }
            mp[c] = i;
            maxlength = max(maxlength, i-start+1);
        }
        return maxlength;
    }
};
