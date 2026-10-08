# Day 94/180 — DSA Preparation

## Focus

Advanced Dynamic Programming — String DP & Game DP

## LeetCode

### #115 — Distinct Subsequences

* 2D String DP
* Counting subsequences
* Include/exclude choices
* Matching characters
* Space optimization

### #877 — Stone Game

* Game DP
* Interval reasoning
* Optimal strategy
* Minimax thinking
* State transitions

## Aptitude

Topic: Time, Speed & Distance

Questions attempted: 10/10

Score: Not recorded

## Files

* `Day_94_Advanced_Dynamic_Programming/94-1_leetcode_distinct_subsequences.cpp`
* `Day_94_Advanced_Dynamic_Programming/94-2_leetcode_stone_game.cpp`

## Learning

Distinct Subsequences reinforced the difference between counting valid ways and finding an optimal value. When characters match, the DP can either use the current character or skip it.

Stone Game introduced game-state reasoning where each decision must account for the opponent making the best possible move.

## Key Takeaway

String DP:

Match → Include OR Skip

Game DP:

Choose Move → Opponent's Best Response → Optimize Result

## Mistakes / Improvements

* Clearly define whether the DP is counting, minimizing, or maximizing.
* Avoid confusing subsequence counting with subsequence optimization.
* For game problems, always consider the opponent's optimal response.
* Define interval boundaries carefully.

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

Day 94 COMPLETE ✅
