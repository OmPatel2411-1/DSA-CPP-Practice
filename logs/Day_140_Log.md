# Day 140 Log — Greedy Interval Scheduling

**Date:** 23 November 2026  
**Challenge:** 180-Day DSA Preparation  
**Status:** User-reported complete

## 1. LeetCode Problems

### Problem 1: #56 — Merge Intervals

- Topics: Arrays, Sorting, Greedy, Intervals
- Focus: Merging overlapping intervals into a set of non-overlapping intervals.
- Learning:
  - Sort intervals by starting position.
  - Compare the current interval with the last merged interval.
  - Merge when intervals overlap; otherwise, add a new interval.

### Problem 2: #57 — Insert Interval

- Topics: Arrays, Sorting, Greedy, Interval Processing
- Focus: Inserting a new interval into an already sorted list of non-overlapping intervals.
- Learning:
  - Preserve intervals that occur before the new interval.
  - Merge all overlapping intervals.
  - Append the remaining intervals after the merged interval.

## 2. Aptitude

- Topic: Decision Making and Course of Action
- Target: 10 questions
- Completed: 10 questions
- Score: Not recorded

## 3. Required Files

- `140-1_leetcode_merge_intervals.cpp`
- `140-2_leetcode_insert_interval.cpp`

## 4. Key Takeaways

- Sorting simplifies interval-related problems.
- Greedy decisions can efficiently handle overlapping intervals.
- Maintaining the last merged interval avoids unnecessary comparisons.
- Insertion and merging can be handled in a single traversal.

## 5. Mistakes and Improvements

- Specific mistakes: Not recorded.
- Areas requiring revision: Not recorded.
- Next step: Review edge cases involving touching intervals, nested intervals, and insertion at the beginning or end.

## 6. Completion Summary

- Both planned LeetCode problems reported complete.
- 10 aptitude questions reported complete.
- Execution completion: 100% based on user report.

## 7. Proof Checklist

- [ ] Both LeetCode submissions show Accepted.
- [ ] Exactly two `.cpp` solution files are saved in the Day 140 folder.
- [ ] Aptitude answers and score are recorded.
- [ ] `logs/Day_140_Log.md` is saved.
- [ ] Git commit and push are verified.
- [ ] LinkedIn post is published.

**Overall:** Day 140 reported complete. Repository, submission, and publication proof remain to be verified.