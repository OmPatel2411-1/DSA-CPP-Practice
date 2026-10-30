class Solution {
public:
    vector<int> getDist(vector<int>& edges, int start) {
        int n = edges.size();
        vector<int> dist(n, INT_MAX);

        int d = 0;
        int node = start;

        while (node != -1 && dist[node] == INT_MAX) {
            dist[node] = d++;
            node = edges[node];
        }

        return dist;
    }

    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();

        vector<int> d1 = getDist(edges, node1);
        vector<int> d2 = getDist(edges, node2);

        int ans = -1;
        int mini = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (d1[i] != INT_MAX && d2[i] != INT_MAX) {
                int maxi = max(d1[i], d2[i]);

                if (maxi < mini) {
                    mini = maxi;
                    ans = i;
                }
            }
        }

        return ans;
    }
};
