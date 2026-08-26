# Day 51/180 — DSA Preparation Log

**Date:** 26 August 2026

## Main Focus

Directed Graphs, cycle detection, DFS recursion states, graph coloring, and reachability.

---

## Completed Tasks

- Solved 2 LeetCode problems.
- Practiced directed graph cycle detection.
- Used DFS recursion states to identify cycles and safe nodes.
- Practiced graph reachability using DFS/BFS.
- Completed 10 aptitude questions.
- Saved accepted solutions locally.
- Updated GitHub repository.
- Added Day 51 learning log.

---

## LeetCode Problems

- 802. Find Eventual Safe States
- 841. Keys and Rooms

---

## Local Files

- `51-1_leetcode_find_eventual_safe_states.cpp`
- `51-2_leetcode_keys_and_rooms.cpp`

---

## What I Learned

- A visited node and a node currently present in the DFS recursion path represent different states.
- Reaching a node that is currently being explored indicates a cycle in a directed graph.
- DFS states can be used to classify nodes as unvisited, currently visiting, or fully processed.
- A node is eventually safe when all possible paths from it lead to terminal nodes instead of cycles.
- Reachability problems can often be simplified into checking whether every node can be visited from a given starting node.

---

## Aptitude

**Topic:** Direction & Distance

**Questions Practiced:** 10

**Status:** Completed

---

## Proof of Work

- 2 LeetCode problems accepted.
- 10 aptitude questions completed.
- Solutions saved locally.
- GitHub updated.
- Day 51 log created.

---

## Reality Check

Don't confuse "visited" with "safe."

A node can be visited and still belong to a cycle.

The state of a node during traversal matters, especially in directed graphs where returning to a node currently in the recursion path has a completely different meaning from reaching a previously completed node.

---

## Next Day Focus

Continue Graph problem-solving while gradually introducing revision of older DSA patterns.