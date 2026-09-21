# Day 77/180 — DSA Preparation

## Topic

**Multi-Source BFS & Grid Shortest Path**

## Planned

* LeetCode #542 — 01 Matrix
* LeetCode #1091 — Shortest Path in Binary Matrix
* 10 Time & Work aptitude questions
* Save accepted solutions locally
* Push work to GitHub
* Publish progress on LinkedIn

## Completed

* ✅ #542 — 01 Matrix — Accepted
* ✅ #1091 — Shortest Path in Binary Matrix — Accepted
* ✅ 2 local C++ solution files
* ✅ 10 Time & Work aptitude questions
* ✅ GitHub push completed
* ✅ LinkedIn update completed

## Key Learnings

### #542 — 01 Matrix

* Used **Multi-Source BFS**.
* All `0` cells are treated as starting points.
* BFS expands simultaneously from every source.
* The first distance assigned to a cell is its minimum distance to a `0`.

### #1091 — Shortest Path in Binary Matrix

* Used BFS because every valid movement has equal cost.
* Each cell can have up to 8 neighboring cells.
* BFS level/depth represents the current shortest path length.
* Blocked starting or ending cells immediately make the path impossible.

## Mistakes / Issues

* No major blocking issue recorded.
* Main focus was recognizing the BFS pattern and maintaining correct distance/visited handling.

## Aptitude

* Topic: Time & Work
* Questions attempted: 10/10
* Proof: Answers/score screenshot uploaded.

## Proof

* #542 Accepted screenshot
* #1091 Accepted screenshot
* Aptitude answers/score screenshot
* GitHub push/commit screenshot

## Reality Check

The goal is not just to complete two BFS problems. I should be able to identify:

* Multi-source BFS
* Shortest path in an unweighted graph/grid
* Level-order distance tracking
* Boundary/neighbor traversal

## Next

Move to the next graph/BFS problem set while maintaining exactly **2 LeetCode problems per day**.
