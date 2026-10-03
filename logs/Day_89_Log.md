# Day 89/180 — Advanced Dynamic Programming

## 📅 Topic

Dynamic Programming — String DP + State-Based DP

## 🧩 LeetCode

### 1. #72 — Edit Distance

* Used 2D Dynamic Programming.
* Defined the state around prefixes of the two strings.
* Handled the three operations: insert, delete, and replace.
* Matching characters allowed the solution to carry forward the previous state.
* Learned how minimum-cost transitions can be modeled with DP.

### 2. #309 — Best Time to Buy and Sell Stock with Cooldown

* Used state-based Dynamic Programming.
* Modeled different states such as holding, selling, and cooldown.
* Tracked the best possible profit for each state.
* Learned how restrictions on future decisions affect state transitions.
* Understood DP as a state machine rather than just an array.

## 💻 Local Code

```text id="t8q2kx"
Day_89_Advanced_Dynamic_Programming/
├── 89-1_leetcode_edit_distance.cpp
└── 89-2_leetcode_stock_cooldown.cpp
```

Exactly 2 C++ files completed.

## 🧠 Key Learnings

* Edit Distance demonstrates how multiple operations can be represented through 2D DP.
* State-based DP is useful when the next decision depends on the current condition.
* Stock problems can be modeled using states such as holding, selling, and cooldown.
* The most important DP question is: what information from the past actually matters for the next decision?
* A correct state definition makes the transition much easier to derive.

## 🧮 Aptitude

### Topic: Ratio & Proportion

* Questions: 10
* Attempted: 10/10
* Score: Not recorded

## 📸 Proof

* LeetCode #72 Accepted
* LeetCode #309 Accepted
* 2 local C++ solutions
* Aptitude solution screenshot
* GitHub update
* LinkedIn Day 89 post

## 📊 Completion

* LeetCode/DSA: 100%
* Local Code: 100%
* Aptitude: 100%
* Proof: 100%
* GitHub: 100%
* LinkedIn: 100%

### Overall Completion: 100%

## 🔥 Reality Check

Advanced DP is increasingly about state modeling.

Instead of asking only "What is the formula?", the better question is:

"What information from the past actually matters for my next decision?"

That determines the state and, eventually, the transition.

## ➡️ Next

Continue with advanced DP patterns involving multiple states, subsequences, and optimization.
