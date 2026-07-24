class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    unordered_set<int> occurrences;
    for (auto pair : freq) {
        if (occurrences.find(pair.second) != occurrences.end()) {
            return false;
        }

        occurrences.insert(pair.second);
    }
    return true;
    }
};