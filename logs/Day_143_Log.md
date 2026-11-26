# Day 143 Log — Greedy Resource Optimization

**Date:** 26 November 2026  
**Challenge:** 180-Day DSA Preparation  
**Status:** User-reported complete

## 1. LeetCode Problems

### Problem 1: #871 — Minimum Number of Refueling Stops

- Topics: Greedy, Priority Queue, Max Heap
- Focus: Reaching a target with the minimum number of refueling stops.
- Learning:
  - Travel forward while tracking reachable fuel stations.
  - Store passed stations' fuel amounts in a max heap.
  - When fuel is insufficient, refuel using the largest available fuel amount from previously passed stations.
  - Reuse previously passed stations strategically to minimize stops.

### Problem 2: #1094 — Car Pooling

- Topics: Greedy, Sorting, Difference Array, Prefix Sum
- Focus: Determining whether all trips can be completed without exceeding vehicle capacity.
- Learning:
  - Represent passenger pickups and drop-offs as changes in passenger count.
  - Track the number of passengers currently in the vehicle.
  - Process location-based changes efficiently.
  - Respect trip intervals where passengers are picked up and dropped off.

## 2. Aptitude

- Topic: Verbal Ability — Sentence Correction and Error Spotting
- Target: 10 questions
- Completed: 10 questions
- Score: Not recorded

## 3. Required Files

- `143-1_leetcode_minimum_number_of_refueling_stops.cpp`
- `143-2_leetcode_car_pooling.cpp`

## 4. Key Takeaways

- Greedy algorithms can optimize resource usage by making strategic decisions when resources are needed.
- A max heap helps choose the largest available refueling option from previously passed stations.
- Difference arrays and event-based processing can simplify capacity tracking.
- Correct handling of pickup and drop-off boundaries is important in interval-based resource problems.

## 5. Mistakes and Improvements

- Specific mistakes: Not recorded.
- Areas requiring revision: Not recorded.
- Next step: Revisit heap-based refueling decisions and test capacity edge cases involving multiple pickups and drop-offs at the same location.

## 6. Completion Summary

- Both planned LeetCode problems reported complete.
- 10 aptitude questions reported complete.
- Execution completion: 100% based on user report.

## 7. Proof Checklist

- [ ] Both LeetCode submissions show Accepted.
- [ ] Exactly two `.cpp` solution files are saved in the Day 143 folder.
- [ ] Aptitude answers and score are recorded.
- [ ] `logs/Day_143_Log.md` is saved.
- [ ] Git commit and push are verified.
- [ ] LinkedIn post is published.

**Overall:** Day 143 reported complete. Repository, submission, and publication proof remain to be verified.