class Solution {
public:
    string freqAlphabets(string s) {
        string ans;

        for (int i = 0; i < s.size(); ) {
            // Check if current character starts a "10#" to "26#" pattern
            if (i + 2 < s.size() && s[i + 2] == '#') {
                int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
                ans += char('a' + num - 1);
                i += 3;
            } else {
                ans += char('a' + (s[i] - '0') - 1);
                i++;
            }
        }

        return ans;
    }
};