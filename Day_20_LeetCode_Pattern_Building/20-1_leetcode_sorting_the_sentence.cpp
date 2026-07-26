class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);  // Since positions are 1 to 9
        string word;

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                int pos = word.back() - '0';
                ans[pos] = word.substr(0, word.size() - 1);
                word.clear();
            } else {
                word += s[i];
            }
        }

        string result;
        for (int i = 1; i <= 9; i++) {
            if (!ans[i].empty()) {
                if (!result.empty()) result += " ";
                result += ans[i];
            }
        }

        return result;
    }
};