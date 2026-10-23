class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings,
                              int firstPerson) {
        sort(meetings.begin(), meetings.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[2] < b[2];
             });

        vector<bool> knows(n, false);
        knows[0] = knows[firstPerson] = true;

        int m = meetings.size();
        int i = 0;

        while (i < m) {
            int time = meetings[i][2];

            unordered_map<int, vector<int>> graph;
            queue<int> q;
            unordered_set<int> visited;

            while (i < m && meetings[i][2] == time) {
                int x = meetings[i][0];
                int y = meetings[i][1];

                graph[x].push_back(y);
                graph[y].push_back(x);
                i++;
            }

            for (auto& [person, neighbors] : graph) {
                if (knows[person]) {
                    q.push(person);
                    visited.insert(person);
                }
            }

            while (!q.empty()) {
                int person = q.front();
                q.pop();

                knows[person] = true;

                for (int next : graph[person]) {
                    if (!visited.count(next)) {
                        visited.insert(next);
                        q.push(next);
                    }
                }
            }
        }

        vector<int> ans;
        for (int person = 0; person < n; person++) {
            if (knows[person]) {
                ans.push_back(person);
            }
        }

        return ans;
    }
};
