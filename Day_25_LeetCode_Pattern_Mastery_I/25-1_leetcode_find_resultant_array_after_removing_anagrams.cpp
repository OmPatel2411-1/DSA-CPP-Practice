class Solution {
public:
    bool isAnagram(string &a, string &b) {
        if (a.size() != b.size()) return false;

        vector<int> cnt(26, 0);
        for (char c : a) cnt[c - 'a']++;
        for (char c : b) cnt[c - 'a']--;

        for (int x : cnt) {
            if (x != 0) return false;
        }
        return true;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]);

        for (int i = 1; i < words.size(); i++) {
            if (!isAnagram(words[i - 1], words[i])) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};