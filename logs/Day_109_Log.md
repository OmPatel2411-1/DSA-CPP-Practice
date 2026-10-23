# Day 109 — Time-Based Graph Connectivity & 0–1 BFS

## Problems Completed

### 1. LeetCode #2092 — Find All People With Secret
- Topics: Graphs, Sorting, BFS/DFS, Connectivity.
- Focus: Processing meetings chronologically and determining how a secret spreads through simultaneous meetings.

### 2. LeetCode #2290 — Minimum Obstacle Removal to Reach Corner
- Topics: 0–1 BFS, Graphs, Deque.
- Focus: Finding the minimum number of obstacles that must be removed to reach the bottom-right corner.

## Key Learnings

- Sorting meetings by time helps process information sharing in the correct chronological order.
- People connected through meetings at the same time may share a secret within that time group.
- 0–1 BFS efficiently handles graph edges with weights of zero and one.
- A deque allows zero-cost transitions to be processed before one-cost transitions.

## Aptitude Practice

- Topic: Probability
- Questions: 10
- Score: Not recorded

## Required Files

- `Day_109_Advanced_Graph_Algorithms/109-1_leetcode_find_all_people_with_secret.cpp`
- `Day_109_Advanced_Graph_Algorithms/109-2_leetcode_minimum_obstacle_removal.cpp`

## Mistakes & Improvements

- Specific mistakes were not reported.
- Review simultaneous-meeting cases and secret propagation.
- Check deque operations and edge cases in 0–1 BFS.
- Record failed test cases and their fixes when applicable.

## Proof Checklist

- [ ] Verify both LeetCode submissions are Accepted.
- [ ] Save exactly two C++ solution files.
- [ ] Record aptitude answers and score.
- [ ] Push the Day 109 folder and `logs/Day_109_Log.md` to GitHub.

## Completion Status

Day 109 marked complete based on user confirmation. Submission results, aptitude score, and GitHub push have not been independently verified.

## Next Step

Continue to Day 110 with two new, non-duplicate LeetCode problems and 10 aptitude questions.