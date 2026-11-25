class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {

        sort(courses.begin(), courses.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        priority_queue<int> pq;
        int totalTime = 0;

        for (auto &course : courses) {

            int duration = course[0];
            int deadline = course[1];

            totalTime += duration;
            pq.push(duration);

            if (totalTime > deadline) {
                totalTime -= pq.top();
                pq.pop();
            }
        }

        return pq.size();
    }
};
