# Day 87/180 — 1D & Sequence Dynamic Programming

## 📅 Topic

Dynamic Programming — Take/Skip + Sequence DP

## 🧩 LeetCode

### 1. #198 — House Robber

* Used 1D Dynamic Programming.
* Identified the take-or-skip decision at every house.
* Compared the result of robbing the current house with skipping it.
* Learned how previous DP states can represent the best answer for smaller prefixes.
* Understood how adjacent restrictions affect the transition.

### 2. #300 — Longest Increasing Subsequence

* Used Dynamic Programming over a sequence.
* Defined the state as the longest increasing subsequence ending at each index.
* Compared the current element with previous elements.
* Built each state from previously calculated valid states.
* Learned the importance of defining exactly what `dp[i]` represents.

## 💻 Local Code

```text
Day_87_Dynamic_Programming_Sequences/
├── 87-1_leetcode_house_robber.cpp
└── 87-2_leetcode_longest_increasing_subsequence.cpp
```

Exactly 2 C++ files completed.

## 🧠 Key Learnings

* Many DP problems can be understood through a take/skip decision.
* `dp[i]` must have a precise meaning before writing the transition.
* Sequence DP often builds the current answer from previously valid elements.
* The transition should directly follow the definition of the state.
* Understanding the O(n²) LIS solution provides a strong foundation before learning optimized approaches.

## 🧮 Aptitude

### Topic: Averages

* Questions: 10
* Attempted: 10/10
* Score: Not recorded

## 📸 Proof

* LeetCode #198 Accepted
* LeetCode #300 Accepted
* 2 local C++ solutions
* Aptitude solution screenshot
* GitHub update
* LinkedIn Day 87 post

## 📊 Completion

* LeetCode/DSA: 100%
* Local Code: 100%
* Aptitude: 100%
* Proof: 100%
* GitHub: 100%
* LinkedIn: 100%

### Overall Completion: 100%

## 🔥 Reality Check

The important DP skill is not memorizing transitions.

Before coding, define exactly what `dp[i]` represents. Once the state is correct, the transition usually becomes much easier to derive.

## ➡️ Next

Continue building DP patterns with more complex state transitions and optimization problems.
