# Day 85/180 — Advanced MST & DSU

## 📅 Topic

Advanced Minimum Spanning Tree (MST) + Disjoint Set Union (DSU)

## 🧩 LeetCode

### 1. #1489 — Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree

* Used Kruskal's algorithm with DSU.
* Learned how to test an edge by forcing it into the MST.
* Learned how to test an edge by excluding it.
* Critical edges increase the MST weight or make the MST impossible when removed.
* Pseudo-critical edges can appear in at least one valid MST without changing the minimum total weight.

### 2. #1579 — Remove Max Number of Edges to Keep Graph Fully Traversable

* Used DSU for Alice and Bob independently.
* Processed shared type-3 edges before user-specific edges.
* Used connectivity checks to identify redundant edges.
* Learned how greedy edge processing can maximize removable edges while preserving connectivity.

## 💻 Local Code

```text
Day_85_Advanced_MST_DSU/
├── 85-1_leetcode_find_critical_and_pseudo_critical_edges.cpp
└── 85-2_leetcode_remove_max_number_of_edges.cpp
```

Exactly 2 C++ files completed.

## 🧠 Key Learnings

* Kruskal's algorithm + DSU can be used to construct MSTs efficiently.
* Forcing and excluding edges helps classify MST edges.
* Critical and pseudo-critical edges require comparing MST behavior under different constraints.
* Shared edges should be considered before individual edges when maintaining multiple graph traversals.
* DSU is useful not only for detecting connectivity but also for tracking redundant relationships.

## 🧮 Aptitude

Topic: Profit & Loss

* Questions: 10
* Attempted: 10/10
* Score: Not recorded in this log

## 📸 Proof

* LeetCode Accepted submissions
* 2 local C++ solutions
* Aptitude solution screenshot
* GitHub repository update
* LinkedIn Day 85 post

## 📊 Completion

* LeetCode/DSA: 100%
* Local Code: 100%
* Aptitude: 100%
* Proof: 100%
* GitHub: 100%
* LinkedIn: 100%

### Overall Completion: 100%

## 🔥 Reality Check

The graph problems are no longer just about BFS/DFS.

The important shift is learning to reason about **which edges matter to the final structure**, how MSTs change when constraints are introduced, and how DSU can efficiently track connectivity.

## ➡️ Next

Move toward the next advanced DSA pattern while continuing to avoid previously completed LeetCode problems.
