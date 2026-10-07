class Solution {
public:
    std::vector<int> smallestSufficientTeam(std::vector<std::string>& req_skills, std::vector<std::vector<std::string>>& people) {
        int n = req_skills.size();
        int nSkills = 1 << n;
        
        std::unordered_map<std::string, int> skillToId;
        for (int i = 0; i < n; ++i) {
            skillToId[req_skills[i]] = i;
        }
        
        std::unordered_map<int, std::vector<int>> dp;
        dp[0] = {};
        
        for (int i = 0; i < people.size(); ++i) {
            int currSkillMask = 0;
            for (const std::string& skill : people[i]) {
                if (skillToId.count(skill)) {
                    currSkillMask |= (1 << skillToId[skill]);
                }
            }
            
            auto dp_copy = dp;
            for (const auto& [mask, indices] : dp_copy) {
                int nextSkillMask = mask | currSkillMask;
                
                if (nextSkillMask == mask) continue;
                
                if (!dp.count(nextSkillMask) || dp[nextSkillMask].size() > indices.size() + 1) {
                    dp[nextSkillMask] = indices;
                    dp[nextSkillMask].push_back(i);
                }
            }
        }
        
        return dp[nSkills - 1];
    }
};