# Day 93/180 — DSA Preparation

## Focus

Advanced Dynamic Programming — Interval DP & Bitmask DP

## LeetCode

### #516 — Longest Palindromic Subsequence

* 2D Dynamic Programming
* Interval DP
* Matching boundary characters
* Subsequence vs substring
* Building solutions from smaller intervals

### #1125 — Smallest Sufficient Team

* Bitmask DP
* State compression
* Skill-set representation
* Minimum team selection
* Reconstructing the selected team

## Aptitude

Topic: Probability & Statistics

Questions attempted: 10/10

Score: Not recorded

## Files

* `Day_93_Advanced_Dynamic_Programming/93-1_leetcode_longest_palindromic_subsequence.cpp`
* `Day_93_Advanced_Dynamic_Programming/93-2_leetcode_smallest_sufficient_team.cpp`

## Learning

Longest Palindromic Subsequence reinforced the interval-DP pattern, where the answer for a larger range is built from smaller ranges.

Smallest Sufficient Team introduced bitmask DP, where a set of required skills can be compressed into a binary state.

## Key Takeaway

Interval DP:

`dp[i][j]` → answer for the range from `i` to `j`.

Bitmask DP:

`Skills → Bitmask → State → Minimum Cost`

## Mistakes / Improvements

* Clearly define interval boundaries before writing transitions.
* Distinguish subsequence problems from substring problems.
* Use bitmasks when a small set of features/skills can be represented as binary states.
* Track both the optimal value and the information needed to reconstruct the answer.

## Proof

* LeetCode submissions: Accepted
* 2 C++ solution files committed
* 10 aptitude questions completed
* GitHub repository updated
* LinkedIn post published

## Completion

LeetCode/DSA: 100%
Local Code: 100%
Aptitude: 100%
Proof: 100%
Overall: 100%

## Status

Day 93 COMPLETE ✅
