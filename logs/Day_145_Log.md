# Day 145 Log — Binary Search Advanced Patterns

**Date:** 28 November 2026  
**Challenge:** 180-Day DSA Preparation  
**Status:** User-reported complete

## 1. LeetCode Problems

### Problem 1: #658 — Find K Closest Elements

- Topics: Binary Search, Two Pointers, Arrays
- Focus: Finding a window of k elements closest to a target in a sorted array.
- Learning:
  - Use the sorted property of the array.
  - Binary search for the starting position of the optimal window.
  - Compare distances from the target to determine which side to eliminate.
  - Handle equal-distance cases correctly.
  - Return the selected elements in sorted order.

### Problem 2: #852 — Peak Index in a Mountain Array

- Topics: Binary Search, Arrays
- Focus: Finding the peak element in a mountain array efficiently.
- Learning:
  - Compare the middle element with its next element.
  - Determine whether the array is still increasing or decreasing.
  - Eliminate the half that cannot contain the peak.
  - Use the mountain's structure to achieve logarithmic time complexity.

## 2. Aptitude

- Topic: Reading Comprehension and Inference
- Target: 10 questions
- Completed: 10 questions
- Score: Not recorded

## 3. Required Files

- `145-1_leetcode_find_k_closest_elements.cpp`
- `145-2_leetcode_peak_index_in_a_mountain_array.cpp`

## 4. Key Takeaways

- Binary search can locate an optimal window, not just a single element.
- Sorted arrays allow distance-based decisions without sorting all elements again.
- Mountain arrays have a monotonic slope property that supports binary search.
- Comparing neighboring elements can reveal the direction toward a peak.
- Understanding the search invariant is more important than memorizing a binary search template.

## 5. Mistakes and Improvements

- Specific mistakes: Not recorded.
- Areas requiring revision: Not recorded.
- Next step: Review the window-based binary search in #658 and slope-based binary search in #852, including boundary cases.

## 6. Completion Summary

- Both planned LeetCode problems reported complete.
- 10 aptitude questions reported complete.
- Execution completion: 100% based on user report.

## 7. Proof Checklist

- [ ] Both LeetCode submissions show Accepted.
- [ ] Exactly two `.cpp` solution files are saved in the Day 145 folder.
- [ ] Aptitude answers and score are recorded.
- [ ] `logs/Day_145_Log.md` is saved.
- [ ] Git commit and push are verified.
- [ ] LinkedIn post is published.

**Overall:** Day 145 reported complete. Repository, submission, and publication proof remain to be verified.