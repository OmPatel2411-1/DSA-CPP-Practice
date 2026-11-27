# Day 144 Log — Binary Search and Search Space

**Date:** 27 November 2026  
**Challenge:** 180-Day DSA Preparation  
**Status:** User-reported complete

## 1. LeetCode Problems

### Problem 1: #34 — Find First and Last Position of Element in Sorted Array

- Topics: Binary Search, Arrays, Boundary Search
- Focus: Finding the first and last occurrence of a target in a sorted array.
- Learning:
  - Apply binary search to find the first occurrence.
  - Apply binary search to find the last occurrence.
  - Handle targets that are absent from the array.
  - Manage search boundaries carefully to avoid off-by-one errors.

### Problem 2: #378 — Kth Smallest Element in a Sorted Matrix

- Topics: Binary Search, Matrix, Heap, Search Space
- Focus: Finding the kth smallest value in a matrix with sorted rows and columns.
- Learning:
  - Binary search over the possible answer range.
  - Count elements smaller than or equal to a candidate.
  - Use matrix ordering to optimize counting.
  - Understand the alternative Min Heap approach.

## 2. Aptitude

- Topic: Verbal Reasoning — Analogy and Classification
- Target: 10 questions
- Completed: 10 questions
- Score: Not recorded

## 3. Required Files

- `144-1_leetcode_find_first_and_last_position_of_element_in_sorted_array.cpp`
- `144-2_leetcode_kth_smallest_element_in_a_sorted_matrix.cpp`

## 4. Key Takeaways

- Binary search is useful for locating boundaries, not just searching for an exact value.
- First and last occurrence problems require careful boundary management.
- Binary search can operate on the answer range rather than array indices.
- A counting function can help determine whether a candidate answer is too small or too large.
- Understanding the sorted structure of a matrix is essential for efficient search.

## 5. Mistakes and Improvements

- Specific mistakes: Not recorded.
- Areas requiring revision: Not recorded.
- Next step: Revisit boundary-search conditions and binary search on the answer, especially the counting logic in #378.

## 6. Completion Summary

- Both planned LeetCode problems reported complete.
- 10 aptitude questions reported complete.
- Execution completion: 100% based on user report.

## 7. Proof Checklist

- [ ] Both LeetCode submissions show Accepted.
- [ ] Exactly two `.cpp` solution files are saved in the Day 144 folder.
- [ ] Aptitude answers and score are recorded.
- [ ] `logs/Day_144_Log.md` is saved.
- [ ] Git commit and push are verified.
- [ ] LinkedIn post is published.

**Overall:** Day 144 reported complete. Repository, submission, and publication proof remain to be verified.