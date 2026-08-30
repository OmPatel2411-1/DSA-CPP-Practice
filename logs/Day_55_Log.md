# Day 55/180 — DSA Preparation Log

**Date:** 30 August 2026

## Main Focus

Stacks, auxiliary stacks, monotonic stacks, and circular array traversal.

---

## Completed Tasks

* Solved 2 LeetCode problems.
* Practiced designing a stack with constant-time minimum retrieval.
* Practiced monotonic stack techniques.
* Solved a Next Greater Element problem on a circular array.
* Completed 10 Percentage aptitude questions.
* Saved accepted solutions locally.
* Updated GitHub repository.
* Added Day 55 learning log.

---

## LeetCode Problems

* 155. Min Stack
* 503. Next Greater Element II

---

## Local Files

* `55-1_leetcode_min_stack.cpp`
* `55-2_leetcode_next_greater_element_ii.cpp`

---

## What I Learned

* An auxiliary stack can maintain additional information without changing the main stack's behavior.
* The minimum value can be maintained so that `getMin()` works in O(1).
* Monotonic stacks help solve Next Greater Element patterns without repeatedly scanning the array.
* Circular arrays can often be handled by traversing indices using modulo arithmetic.
* The same monotonic-stack pattern can be adapted to different array structures.

---

## Aptitude

**Topic:** Percentages

**Questions Practiced:** 10

**Status:** Completed

---

## Proof of Work

* 2 LeetCode problems accepted.
* 10 aptitude questions completed.
* Solutions saved locally.
* GitHub updated.
* Day 55 log created.

---

## Reality Check

The useful lesson today isn't memorizing a monotonic-stack template.

It's recognizing when a problem repeatedly asks:

"What is the next larger/smaller element?"

That pattern appears in many forms. Once recognized, a stack can eliminate the repeated scanning that would otherwise make the solution inefficient.

---

## Next Day Focus

Continue with Stack/Queue patterns and gradually increase the difficulty while revisiting previously learned patterns.
