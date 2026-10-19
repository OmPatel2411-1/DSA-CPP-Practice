# Day 105/180 — DSA Preparation Log

## Focus
Advanced Graph Algorithms — Eulerian Paths & Dependency Ordering

## LeetCode

### #2097 — Valid Arrangement of Pairs
- Eulerian Path
- Directed Graph
- Hierholzer's Algorithm
- In-degree / Out-degree
- Graph traversal

### #1203 — Sort Items by Groups Respecting Dependencies
- Topological Sort
- Dependency Graph
- Group Ordering
- Cycle Detection
- DAG processing

## Aptitude
Topic: Probability

Questions attempted: 10/10

Score: Not recorded

## Files
- `Day_105_Advanced_Graph_Algorithms/105-1_leetcode_valid_arrangement_pairs.cpp`
- `Day_105_Advanced_Graph_Algorithms/105-2_leetcode_sort_items_group_dependencies.cpp`

## Key Learnings

Today's problems showed two different ways of processing directed graphs.

For #2097, balancing in-degree and out-degree made it possible to construct an Eulerian path using Hierholzer's Algorithm.

For #1203, solving the problem required performing topological sorting at both the group level and the item level while detecting dependency cycles.

## Biggest Takeaway

Directed graph problems often become manageable after identifying the correct graph property first.

Eulerian Path → Degree Balance

Dependency Ordering → Topological Sort

## Improvements
- Check graph properties before selecting an algorithm.
- Verify cycle conditions before performing topological ordering.
- Pay attention to disconnected components in directed graphs.
- Continue recording aptitude scores for measurable progress.

## Proof Checklist
- Both LeetCode submissions Accepted
- Two C++ files saved
- Aptitude answers recorded
- GitHub push verified
- LinkedIn post published

## Status
Day 105 COMPLETE ✅