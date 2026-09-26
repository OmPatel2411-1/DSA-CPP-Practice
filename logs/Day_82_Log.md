# Day 82/180 — DSA Preparation

## Topic

**Advanced Graph BFS & State-Based Shortest Path**

## Planned

* LeetCode #778 — Swim in Rising Water
* LeetCode #847 — Shortest Path Visiting All Nodes
* 10 Time & Work aptitude questions
* Save accepted solutions locally
* Push work to GitHub
* Publish LinkedIn progress

## Completed

* ✅ #778 — Swim in Rising Water — Accepted
* ✅ #847 — Shortest Path Visiting All Nodes — Accepted
* ✅ 2 local C++ solution files
* ✅ 10 Time & Work aptitude questions
* ✅ GitHub push completed
* ✅ LinkedIn update completed

## Key Learnings

### #778 — Swim in Rising Water

* Treated the grid as a weighted graph.
* Used priority-queue based traversal.
* The relevant path cost is the maximum elevation encountered.
* Practiced minimax-style shortest-path reasoning.

### #847 — Shortest Path Visiting All Nodes

* Used BFS with a bitmask.
* Represented the state using both the current node and the set of visited nodes.
* Used multi-source BFS because any node can be the starting point.
* Learned that the same graph node can represent different states depending on the visited set.

## Aptitude

* Topic: Time & Work
* Questions attempted: 10/10
* Proof: Answers/score recorded.

## Core Learning

Today's important concept was **state-based graph traversal**.

A state may be:

`(current node, visited nodes)`

rather than simply:

`current node`

This allows BFS to solve problems where the history of traversal affects the remaining task.

## Reality Check

The goal is to recognize when a normal visited array is insufficient and additional state must be included in the traversal.

## Proof

* #778 Accepted screenshot
* #847 Accepted screenshot
* Aptitude answers + score screenshot
* GitHub commit/push screenshot

## Next

Continue advanced graph algorithms while maintaining exactly **2 LeetCode problems per day**.
