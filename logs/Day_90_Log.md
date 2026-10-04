# Day 90/180 — DSA Preparation

## Focus

Dynamic Programming — Target Sum + Interval DP

## LeetCode

### #494 — Target Sum

* Plus/minus assignment
* Reachable sum states
* Subset-sum transformation
* Counting valid ways
* Dynamic programming

### #312 — Burst Balloons

* Interval DP
* Choosing the last balloon
* Splitting into independent intervals
* Handling order-dependent decisions
* Reusing smaller interval solutions

## Aptitude

Topic: Simple & Compound Interest

Questions attempted: 10/10

Score: Not recorded

## Files

* `Day_90_Advanced_Dynamic_Programming/90-1_leetcode_target_sum.cpp`
* `Day_90_Advanced_Dynamic_Programming/90-2_leetcode_burst_balloons.cpp`

## Learning

Target Sum showed how a signed-sum problem can be transformed into a subset-sum counting problem.

Burst Balloons reinforced an important interval-DP technique: instead of deciding which balloon to burst first, choose which balloon is burst last. This makes the left and right intervals independent subproblems.

## Key Takeaway

State → Choice → Transition → Base Case

For interval DP:

Choose the last operation → split the interval → solve both smaller intervals → combine their results.

## Mistakes / Improvements

* Need to identify the correct DP state before writing transitions.
* For interval DP, carefully determine why the chosen operation makes subproblems independent.
* Avoid trying to simulate every possible operation order directly.

## Proof

* LeetCode submissions: Accepted
* 2 C++ solution files committed
* Aptitude questions completed
* GitHub repository updated
* LinkedIn post published

## Completion

LeetCode/DSA: 100%
Local Code: 100%
Aptitude: 100%
Proof: 100%
Overall: 100%

## Status

Day 90 COMPLETE ✅
