class Solution {
    vector<int> ans;
    vector<pair<int,int>> arr;

    void mergeSort(int low, int high) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;

        mergeSort(low, mid);
        mergeSort(mid + 1, high);

        vector<pair<int,int>> temp;

        int i = low;
        int j = mid + 1;

        int count = 0;

        while (i <= mid && j <= high) {
            if (arr[j].first < arr[i].first) {
                temp.push_back(arr[j]);
                count++;
                j++;
            }
            else {
                ans[arr[i].second] += count;
                temp.push_back(arr[i]);
                i++;
            }
        }

        while (i <= mid) {
            ans[arr[i].second] += count;
            temp.push_back(arr[i]);
            i++;
        }

        while (j <= high) {
            temp.push_back(arr[j]);
            j++;
        }

        for (int k = low; k <= high; k++) {
            arr[k] = temp[k - low];
        }
    }

public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();

        ans.assign(n, 0);
        arr.clear();

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        mergeSort(0, n - 1);

        return ans;
    }
};