class Solution {
public:
    int countAsterisks(string s) {
        bool insideBar = false;
        int ans = 0;

        for (char c : s) {
            if (c == '|') {
                insideBar = !insideBar;
            } 
            else if (c == '*' && !insideBar) {
                ans++;
            }
        }

        return ans;
    }
};