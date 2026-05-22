class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {

        // Edge case
        if(strs.size() == 1) {
            return strs[0];
        }

        int mincount = INT_MAX;

        for(int i = 0; i < strs.size() - 1; i++) {

            int count = 0;

            int len = min(strs[i].size(), strs[i + 1].size());

            for(int j = 0; j < len; j++) {

                if(strs[i][j] == strs[i + 1][j]) {
                    count++;
                }
                else {
                    break;
                }
            }

            mincount = min(mincount, count);
        }

        string str;

        for(int i = 0; i < mincount; i++) {
            str += strs[0][i];
        }

        return str;
    }
};