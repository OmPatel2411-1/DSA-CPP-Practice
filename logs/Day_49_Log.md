# Day 49/180 — DSA Preparation Log

**Date:** 24 August 2026

## Main Focus

Graphs, BFS, multi-source BFS, connected components, and grid traversal.

---

## Completed Tasks

- Solved 2 LeetCode problems.
- Practiced multi-source BFS.
- Practiced calculating the size of connected components.
- Completed 10 aptitude questions.
- Saved accepted solutions locally.
- Updated GitHub repository.
- Added Day 49 learning log.

---

## LeetCode Problems

- 994. Rotting Oranges
- 695. Max Area of Island

---

## Local Files

- `49-1_leetcode_rotting_oranges.cpp`
- `49-2_leetcode_max_area_of_island.cpp`

---

## What I Learned

- Multi-source BFS starts from multiple nodes simultaneously.
- All initial rotten oranges can be placed into the queue before starting traversal.
- BFS processes the spreading effect level by level.
- A connected component can represent more than just a count; its size can also be calculated during traversal.
- DFS/BFS can return or accumulate information about a component while exploring it.

---

## Aptitude

**Topic:** Clocks & Calendars

**Questions Practiced:** 10

**Status:** Completed

---

## Proof of Work

- 2 LeetCode problems accepted.
- 10 aptitude questions completed.
- Solutions saved locally.
- GitHub updated.
- Day 49 log created.

---

## Reality Check

The important distinction today is recognizing when multiple starting points should be processed together.

Running BFS independently from every rotten orange would be the wrong mental model.

When multiple sources expand simultaneously, they belong in the queue together from the start.

---

## Next Day Focus

Continue Graph fundamentals with a new connectivity or traversal pattern.