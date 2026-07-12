# Day 6/180 — DSA Preparation Log

**Date:** 12 July 2026
**Main Focus:** Optimized array approaches and simple interest aptitude basics

## Planned Tasks

1. Continue array-based DSA practice with optimized approaches.
2. Solve leaders in an array using right-to-left traversal.
3. Solve longest consecutive sequence using set.
4. Practice Dutch National Flag algorithm.
5. Practice Boyer-Moore majority vote algorithm.
6. Revise Kadane’s Algorithm.
7. Create prefix sum array.
8. Count subarrays with sum equal to k using brute force.
9. Count subarrays with sum equal to k using prefix sum and map.
10. Complete simple interest aptitude practice.
11. Push Day 6 code to GitHub.
12. Update README and daily log.
13. Prepare LinkedIn progress post.

## Completed Tasks

1. Completed optimized leaders in an array.
2. Completed longest consecutive sequence using set.
3. Completed sorting 0s, 1s, and 2s using Dutch National Flag algorithm.
4. Completed majority element using Boyer-Moore Voting Algorithm.
5. Completed Kadane’s Algorithm revision.
6. Completed prefix sum array.
7. Completed subarray sum equals k using brute force.
8. Completed subarray sum equals k using prefix sum and map.
9. Completed simple interest aptitude practice.
10. Prepared proof through code, log, screenshots, and GitHub update.

## Programs Completed

* `6-1_leaders_in_array_optimized.cpp`
* `6-2_longest_consecutive_sequence_using_set.cpp`
* `6-3_sort_0s_1s_2s_dutch_national_flag.cpp`
* `6-4_majority_element_boyer_moore.cpp`
* `6-5_kadanes_algorithm_revision.cpp`
* `6-6_prefix_sum_array.cpp`
* `6-7_subarray_sum_equals_k_bruteforce.cpp`
* `6-8_subarray_sum_equals_k_prefix_sum.cpp`

## Aptitude Practice

**Topic:** Simple Interest Basics
**Questions Practiced:** 10
**Status:** Completed
**Proof:** Questions and answers recorded in this log; screenshot/photo added as proof.

## Aptitude Questions Practiced

1. P = ₹1000, R = 10%, T = 2 years. Find SI.
2. P = ₹5000, R = 8%, T = 3 years. Find SI.
3. P = ₹2000, R = 5%, T = 4 years. Find SI.
4. P = ₹3000, R = 12%, T = 2 years. Find SI.
5. P = ₹1500, R = 10%, T = 1 year. Find Amount.
6. P = ₹4000, R = 6%, T = 5 years. Find Amount.
7. SI = ₹600, P = ₹3000, T = 2 years. Find Rate.
8. SI = ₹900, P = ₹5000, R = 6%. Find Time.
9. Amount = ₹5500, P = ₹5000. Find SI.
10. P = ₹2500, R = 4%, T = 3 years. Find Amount.

## Aptitude Answers

1. SI = ₹200
2. SI = ₹1200
3. SI = ₹400
4. SI = ₹720
5. Amount = ₹1650
6. Amount = ₹5200
7. Rate = 10%
8. Time = 3 years
9. SI = ₹500
10. Amount = ₹2800

## What I Learned

* Leaders in an array can be optimized by traversing from right to left.
* Longest consecutive sequence can be solved efficiently using set.
* In longest consecutive sequence using set, counting should start only when `x - 1` is not present.
* Dutch National Flag algorithm sorts 0s, 1s, and 2s using low, mid, and high pointers.
* In Dutch National Flag, `mid` should not increase when swapping with `high`.
* Boyer-Moore Voting Algorithm finds the majority element using candidate and count.
* Kadane’s Algorithm is important for maximum subarray sum.
* Prefix sum helps solve subarray problems more efficiently.
* Subarray sum equals k can be solved using prefix sum and map.
* Simple interest problems require clear use of principal, rate, time, interest, and amount.

## Mistakes / Errors Faced

* Dutch National Flag algorithm required careful pointer handling.
* Boyer-Moore logic was confusing at first because count increases and decreases based on candidate matching.
* Prefix sum with map required understanding why `prefixSum - k` is checked.
* Subarray sum equals k using map needed dry running to understand previous prefix sums.
* Simple interest aptitude required careful formula use when rate or time was missing.

## How I Fixed Them

* Dry ran Dutch National Flag with 0s, 1s, and 2s.
* Practiced Boyer-Moore by tracking candidate and count step by step.
* Used brute force first for subarray sum equals k before solving the prefix sum version.
* Understood that if current prefix sum is `X`, then checking `X - K` helps find a previous prefix that forms sum `K`.
* Recorded aptitude questions and answers clearly in the log.

## Proof of Work

**GitHub:** Day 6 optimized array practice files pushed under `Day_06_Arrays_Optimized`.
**Screenshots:** Code/output screenshots added.
**Aptitude Proof:** Questions and answers recorded in this log; screenshot/photo added as proof.
**LinkedIn Post:** Prepared/posted Day 6 progress post.

## Completion Percentage

**DSA:** 100%
**Aptitude:** 100%
**Proof:** Completed
**LinkedIn:** Pending/Completed
**Overall:** 100% after GitHub push and LinkedIn post

## Reality Check

Day 6 was more serious than previous days because it introduced optimized approaches.

Dutch National Flag, Boyer-Moore, prefix sum, and map-based subarray sum are not just beginner syntax problems. These require actual dry running and understanding.

This is the stage where copying code gives fake confidence. The real progress comes only if I can explain why the logic works.

## Next Day Focus

Continue with array revision and mixed problem practice:

1. Revise Two Sum using map
2. Revise Kadane’s Algorithm
3. Revise Dutch National Flag
4. Revise prefix sum basics
5. Solve mixed array problems without hints
6. Identify weak topics from Day 1 to Day 6
7. Continue aptitude practice
