# Day 45/180 — DSA Preparation Log

**Date:** 20 August 2026

## Main Focus

Binary Search Trees, Lowest Common Ancestor, Inorder Traversal, and BST ordering properties.

---

## Planned Tasks

- Solve 2 LeetCode problems.
- Apply BST ordering to navigate the tree efficiently.
- Practice Lowest Common Ancestor logic.
- Use Inorder Traversal to exploit the sorted property of BSTs.
- Complete 10 aptitude questions.
- Save accepted solutions locally.
- Update GitHub and documentation.

---

## Completed Tasks

- Solved both LeetCode problems.
- Saved accepted solutions locally.
- Completed 10 aptitude questions.
- Updated GitHub repository.
- Added Day 45 learning log.

---

## LeetCode Problems

- 235. Lowest Common Ancestor of a Binary Search Tree
- 530. Minimum Absolute Difference in BST

---

## Local Files

- `45-1_leetcode_lowest_common_ancestor_of_a_bst.cpp`
- `45-2_leetcode_minimum_absolute_difference_in_bst.cpp`

---

## What I Learned

- BST ordering can be used to navigate directly toward the Lowest Common Ancestor.
- If both target nodes are on the same side of the current node, traversal can continue in that direction.
- The split point between two target nodes is their Lowest Common Ancestor.
- Inorder Traversal of a BST produces values in sorted order.
- The minimum absolute difference must occur between adjacent values in that sorted order.

---

## Aptitude

**Topic:** Number System

**Questions Practiced:** 10

**Status:** Completed

---

## Proof of Work

- 2 LeetCode problems accepted.
- 10 aptitude questions completed.
- Solutions saved locally.
- GitHub updated.
- Day 45 log created.

---

## Reality Check

The important improvement is recognizing when a data structure gives you information for free.

A BST isn't just a Binary Tree with a different name. Its ordering property can eliminate unnecessary traversal and simplify problems significantly.

The next step is to keep applying these structural properties instead of treating every tree problem as a generic DFS.