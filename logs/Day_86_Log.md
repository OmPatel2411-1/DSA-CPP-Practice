# Day 86/180 — Dynamic Programming Fundamentals

## 📅 Topic

Dynamic Programming — 1D & 2D DP

## 🧩 LeetCode

### 1. #1143 — Longest Common Subsequence

* Used 2D Dynamic Programming.
* Defined the state based on prefixes of both strings.
* When characters matched, used the diagonal state.
* When characters differed, compared the two possible previous states.
* Learned the difference between subsequence and substring.

### 2. #322 — Coin Change

* Used 1D Dynamic Programming.
* Defined each state as the minimum number of coins required for an amount.
* Built solutions for smaller amounts before larger amounts.
* Handled amounts that cannot be formed.
* Learned the minimum-optimization DP pattern.

## 💻 Local Code

```text
Day_86_Dynamic_Programming_Basics/
├── 86-1_leetcode_longest_common_subsequence.cpp
└── 86-2_leetcode_coin_change.cpp
```

Exactly 2 C++ files completed.

## 🧠 Key Learnings

* DP starts with defining the correct state.
* A useful DP solution can be broken into:
  **State → Choice → Transition → Base Case**
* 2D DP is useful when the state depends on two changing parameters.
* 1D DP can represent progressively solved subproblems such as target amounts.
* Correct state definition is more important than immediately writing code.

## 🧮 Aptitude

### Topic: Time, Speed & Distance

* Questions: 10
* Attempted: 10/10
* Score: Not recorded

## 📸 Proof

* LeetCode #1143 Accepted
* LeetCode #322 Accepted
* 2 local C++ solutions
* Aptitude solution screenshot
* GitHub update
* LinkedIn Day 86 post

## 📊 Completion

* LeetCode/DSA: 100%
* Local Code: 100%
* Aptitude: 100%
* Proof: 100%
* GitHub: 100%
* LinkedIn: 100%

### Overall Completion: 100%

## 🔥 Reality Check

Dynamic Programming is not about memorizing hundreds of formulas.

The real skill is recognizing the smaller problem hidden inside the current problem and defining a state that captures exactly what matters.

## ➡️ Next

Continue building DP fundamentals and gradually move toward more difficult state-transition problems.
