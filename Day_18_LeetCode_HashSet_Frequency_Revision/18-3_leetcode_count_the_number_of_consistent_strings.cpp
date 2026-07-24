class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowedSet;
    for (char ch : allowed) {
        allowedSet.insert(ch);
    }
    int count = 0;
    for (string word : words) {
        bool valid = true;
        for (char ch : word) {
            if (allowedSet.find(ch) == allowedSet.end()) {
                valid = false;
                break;
            }
        }
        if (valid) {
            count++;
        }
    }
    return count;
    }
};