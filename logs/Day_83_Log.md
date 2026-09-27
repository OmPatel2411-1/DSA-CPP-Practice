# Day 83/180 — DSA Preparation

## Topic

**Disjoint Set Union (DSU)**

## Planned

* LeetCode #721 — Accounts Merge
* LeetCode #990 — Satisfiability of Equality Equations
* 10 Time & Work aptitude questions
* Save accepted solutions locally
* Push work to GitHub
* Publish LinkedIn progress

## Completed

* ✅ #721 — Accounts Merge — Accepted
* ✅ #990 — Satisfiability of Equality Equations — Accepted
* ✅ 2 local C++ solution files
* ✅ 10 Time & Work aptitude questions
* ✅ GitHub push completed
* ✅ LinkedIn update completed

## Key Learnings

### #721 — Accounts Merge

* Used connected-component reasoning.
* Accounts were connected when they shared an email.
* DSU was used to merge related accounts efficiently.
* Practiced mapping real-world identifiers to graph/DSU components.

### #990 — Satisfiability of Equality Equations

* Used DSU to group variables connected by equality.
* Equality relationships were processed through union operations.
* Inequality relationships were checked against the resulting components.
* A contradiction exists when two variables required to be different belong to the same component.

## Aptitude

* Topic: Time & Work
* Questions attempted: 10/10
* Proof: Answers/score recorded.

## Core Learning

DSU is useful when a problem repeatedly asks us to:

* Merge groups
* Find a group's representative
* Check whether two elements belong to the same component

The main operations are:

**Find → identify representative**

**Union → merge two components**

## Reality Check

The important lesson is not memorizing the DSU implementation.

The key is recognizing the pattern:

**Relationships → merge groups → query connectivity.**

## Proof

* #721 Accepted screenshot
* #990 Accepted screenshot
* Aptitude answers + score screenshot
* GitHub commit/push screenshot

## Next

Continue advanced DSA with exactly **2 LeetCode problems per day**.
