class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> row;

    string r1 = "qwertyuiop";
    string r2 = "asdfghjkl";
    string r3 = "zxcvbnm";

    for (char ch : r1) row[ch] = 1;
    for (char ch : r2) row[ch] = 2;
    for (char ch : r3) row[ch] = 3;

    vector<string> result;

    for (string word : words) {
        int currentRow = row[tolower(word[0])];
        bool valid = true;

        for (char ch : word) {
            if (row[tolower(ch)] != currentRow) {
                valid = false;
                break;
            }
        }

        if (valid) {
            result.push_back(word);
        }
    }

    return result;
    }
};