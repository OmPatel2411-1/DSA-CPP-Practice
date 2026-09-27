class Solution {
public:
    vector<int> parent, rankv;

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) return;

        if (rankv[a] < rankv[b])
            swap(a, b);

        parent[b] = a;

        if (rankv[a] == rankv[b])
            rankv[a]++;
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();

        parent.resize(n);
        rankv.assign(n, 0);

        for (int i = 0; i < n; i++)
            parent[i] = i;

        unordered_map<string, int> emailOwner;

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < accounts[i].size(); j++) {
                string email = accounts[i][j];

                if (emailOwner.count(email)) {
                    unite(i, emailOwner[email]);
                } else {
                    emailOwner[email] = i;
                }
            }
        }

        unordered_map<int, vector<string>> groups;

        for (auto& [email, idx] : emailOwner) {
            groups[find(idx)].push_back(email);
        }

        vector<vector<string>> ans;

        for (auto& [root, emails] : groups) {
            sort(emails.begin(), emails.end());

            vector<string> account;
            account.push_back(accounts[root][0]);

            for (string& email : emails)
                account.push_back(email);

            ans.push_back(account);
        }

        return ans;
    }
};
