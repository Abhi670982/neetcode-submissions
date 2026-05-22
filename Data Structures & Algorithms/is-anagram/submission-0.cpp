class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (t.length() == s.length()) {
            vector<int> arr1(26, 0);
            vector<int> arr2(26, 0);
            for (int i = 0; i < s.length(); i++) {
                arr1[s[i] - 'a']++;
                arr2[t[i] - 'a']++;
            }
            

            for(int i=0; i<arr1.size(); i++){
                if(arr1[i] != arr2[i])
                return false;
            }
        }else{
            return false;
        }
        return true;
    }
};
