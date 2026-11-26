class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;

        int stops = 0;
        int prev = 0;

        stations.push_back({target, 0});

        for (auto &station : stations) {
            int pos = station[0];
            int fuel = station[1];

            startFuel -= (pos - prev);

            while (startFuel < 0 && !pq.empty()) {
                startFuel += pq.top();
                pq.pop();
                stops++;
            }

            if (startFuel < 0) {
                return -1;
            }

            pq.push(fuel);

            prev = pos;
        }

        return stops;
    }
};
