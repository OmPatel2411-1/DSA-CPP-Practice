# Day 58 — DSA Preparation

## 📅 Day

Day 58 / 180

## 🎯 Focus

**Intervals + Sorting + Greedy Algorithms**

Today's focus was on understanding how sorting can simplify interval-based problems and how greedy decisions can be used to maximize the number of non-overlapping intervals or minimize the number of required arrows.

---

## 🧩 LeetCode Problems

### 435. Non-overlapping Intervals

**Concepts:**

* Intervals
* Sorting
* Greedy Algorithm
* Overlapping Intervals

**Approach:**

* Sort intervals based on their ending time.
* Keep the interval that finishes earliest.
* If the next interval overlaps, remove the one with the later ending time.
* This leaves maximum space for future intervals.

**Key Learning:**

> In interval problems, choosing the interval that ends earliest often leaves the most room for the remaining intervals.

**Status:** ✅ Accepted

---

### 452. Minimum Number of Arrows to Burst Balloons

**Concepts:**

* Intervals
* Sorting
* Greedy Algorithm
* Overlapping Ranges

**Approach:**

* Sort balloons by their ending coordinate.
* Shoot an arrow at the end of the current balloon.
* Any balloon whose starting point is before or equal to that position can be burst by the same arrow.
* When there is no overlap, shoot a new arrow.

**Key Learning:**

> When multiple intervals overlap, place the greedy choice at the common ending point to cover as many intervals as possible.

**Status:** ✅ Accepted

---

## 🧠 DSA Learning

Today's important concepts:

* Interval representation
* Sorting intervals
* Detecting overlap
* Greedy decision making
* Earliest finishing interval
* Range intersection
* Reusing one decision to cover multiple intervals

### Important Pattern

For many interval problems:

**Sort → Check overlap → Make the locally optimal greedy choice**

This pattern can significantly simplify problems that initially look complicated.

---

## 🧮 Aptitude

### Topic: Average

Completed **10 aptitude questions** covering average-based calculations.

**Status:** ✅ Completed

---

## 📊 Daily Progress

| Category           | Status   |
| ------------------ | -------- |
| LeetCode / DSA     | ✅ 100%   |
| Local C++ Code     | ✅ 100%   |
| Aptitude           | ✅ 100%   |
| GitHub Proof       | ✅        |
| Daily Log          | ✅        |
| LinkedIn Post      | ✅        |
| Overall Completion | **100%** |

---

## 📁 Local Code

Folder:

`Day_58_Intervals_Greedy`

Files:

* `58-1_leetcode_non_overlapping_intervals.cpp`
* `58-2_leetcode_minimum_number_of_arrows.cpp`

---

## 💡 Key Takeaway

Day 58 helped strengthen my understanding of **Greedy Algorithms through interval problems**.

The main lesson was that sorting by the right boundary can make the correct greedy decision much easier to identify.

---

## 🔥 Reality Check

Greedy problems are not always about trying every possibility.

The real challenge is identifying **why a local decision is safe** and proving that it leads toward the optimal answer.

Today was about building that intuition instead of just memorizing solutions.

---

## 🚀 Next Focus

Continue with new DSA patterns while maintaining the rule of solving **2 LeetCode problems per day**.
