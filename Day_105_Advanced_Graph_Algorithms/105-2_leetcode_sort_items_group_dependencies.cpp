class Solution {
private:
    vector<int> topologicalSort(const vector<unordered_set<int>>& graph, vector<int>& indegree, const vector<int>& nodes) {
        queue<int> q;
        for (int node : nodes) {
            if (indegree[node] == 0) {
                q.push(node);
            }
        }
        
        vector<int> result;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            result.push_back(curr);
            
            for (int neighbor : graph[curr]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }
        
        if (result.size() != nodes.size()) {
            return {}; // Cycle detected
        }
        return result;
    }

public:
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        for (int i = 0; i < n; ++i) {
            if (group[i] == -1) {
                group[i] = m++;
            }
        }
        
        vector<unordered_set<int>> itemGraph(n);
        vector<int> itemIndegree(n, 0);
        
        vector<unordered_set<int>> groupGraph(m);
        vector<int> groupIndegree(m, 0);
        
        for (int i = 0; i < n; ++i) {
            int currGroup = group[i];
            for (int prev : beforeItems[i]) {
                int prevGroup = group[prev];
                
                if (itemGraph[prev].find(i) == itemGraph[prev].end()) {
                    itemGraph[prev].insert(i);
                    itemIndegree[i]++;
                }
                
                if (currGroup != prevGroup) {
                    if (groupGraph[prevGroup].find(currGroup) == groupGraph[prevGroup].end()) {
                        groupGraph[prevGroup].insert(currGroup);
                        groupIndegree[currGroup]++;
                    }
                }
            }
        }
        
        vector<int> allGroups(m);
        for (int i = 0; i < m; ++i) allGroups[i] = i;
        vector<int> sortedGroups = topologicalSort(groupGraph, groupIndegree, allGroups);
        if (sortedGroups.empty()) return {}; 

        vector<int> allItems(n);
        for (int i = 0; i < n; ++i) allItems[i] = i;
        vector<int> sortedItems = topologicalSort(itemGraph, itemIndegree, allItems);
        if (sortedItems.empty()) return {};
        
        unordered_map<int, vector<int>> groupToSortedItems;
        for (int item : sortedItems) {
            groupToSortedItems[group[item]].push_back(item);
        }
        
        vector<int> result;
        for (int g : sortedGroups) {
            if (groupToSortedItems.find(g) != groupToSortedItems.end()) {
                for (int item : groupToSortedItems[g]) {
                    result.push_back(item);
                }
            }
        }
        
        return result;
    }
};