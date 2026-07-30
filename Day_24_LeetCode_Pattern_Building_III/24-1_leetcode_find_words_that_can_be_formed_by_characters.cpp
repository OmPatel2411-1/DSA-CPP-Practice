class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26, 0);

        for (char c : chars)
            freq[c - 'a']++;

        int ans = 0;

        for (string &word : words) {
            vector<int> temp = freq;
            bool ok = true;

            for (char c : word) {
                temp[c - 'a']--;
                if (temp[c - 'a'] < 0) {
                    ok = false;
                    break;
                }
            }

            if (ok)
                ans += word.length();
        }

        return ans;
    }
};