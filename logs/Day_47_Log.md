# Day 47/180 — DSA Preparation Log

**Date:** 22 August 2026

## Main Focus

Binary Trees, DFS, BFS, level tracking, recursive state, and maximum path problems.

---

## Completed Tasks

- Solved 2 LeetCode problems.
- Practiced Binary Tree level tracking.
- Worked on recursive state and path calculation.
- Completed 10 aptitude questions.
- Saved accepted solutions locally.
- Updated GitHub repository.
- Added Day 47 learning log.

---

## LeetCode Problems

- 199. Binary Tree Right Side View
- 124. Binary Tree Maximum Path Sum

---

## Local Files

- `47-1_leetcode_binary_tree_right_side_view.cpp`
- `47-2_leetcode_binary_tree_maximum_path_sum.cpp`

---

## What I Learned

- Binary Tree Right Side View can be solved by processing nodes level by level.
- BFS makes it straightforward to identify the last node at each level.
- In Maximum Path Sum, the path calculated at a node and the value returned to its parent are not necessarily the same.
- A recursive call can return only one branch upward, while the current node can combine both left and right branches to update the overall maximum.
- Defining the correct recursive return value is often the key to solving harder tree problems.

---

## Aptitude

**Topic:** Logical Reasoning

**Questions Practiced:** 10

**Status:** Completed

---

## Proof of Work

- 2 LeetCode problems accepted.
- 10 aptitude questions completed.
- Solutions saved locally.
- GitHub updated.
- Day 47 log created.

---

## Reality Check

Problem 124 is a good example of why knowing recursion syntax is not enough.

The difficult part is deciding what information moves upward and what information is used only at the current node.

That distinction is becoming increasingly important as tree problems get harder.

---

## Next Day Focus

Start transitioning from trees toward a new problem-solving area while continuing to reinforce pattern recognition.