# Day 59 — DSA Preparation

## 📅 Day

Day 59 / 180

## 🎯 Focus

**Binary Search on Answer**

Today's focus was on understanding how binary search can be applied to a **range of possible answers**, rather than directly searching inside an array.

---

## 🧩 LeetCode Problems

### 875. Koko Eating Bananas

**Concepts:**

* Binary Search
* Binary Search on Answer
* Search Space
* Ceiling Division
* Feasibility Check

**Approach:**

* The minimum possible eating speed is `1`.
* The maximum possible speed is the largest pile.
* For every possible speed, calculate the total hours required.
* If Koko can finish within the given hours, try a smaller speed.
* Otherwise, increase the speed.

**Key Learning:**

The answer itself can be searched using binary search when the feasibility of a candidate answer changes monotonically.

**Status:** ✅ Accepted

---

### 1011. Capacity To Ship Packages Within D Days

**Concepts:**

* Binary Search on Answer
* Greedy
* Search Space
* Feasibility Check

**Approach:**

* Minimum capacity = maximum individual package weight.
* Maximum capacity = sum of all package weights.
* For a candidate capacity, simulate shipping packages in order.
* Count how many days are required.
* If the required days are within the limit, try a smaller capacity.
* Otherwise, increase the capacity.

**Key Learning:**

The important step is designing a correct **feasibility check**. Once feasibility is monotonic, binary search can efficiently find the minimum valid answer.

**Status:** ✅ Accepted

---

## 🧠 DSA Learning

Today's main pattern:

**Binary Search on Answer**

General process:

1. Identify the possible answer range.
2. Select the middle value.
3. Check whether that value is feasible.
4. If feasible, search for a better/smaller answer.
5. If not feasible, move toward larger answers.
6. Continue until the optimal answer is found.

This pattern is useful when the answer space is large but feasibility can be checked efficiently.

---

## 🧮 Aptitude

### Topic: Time & Work

Completed **10 Time & Work aptitude questions**.

Topics included:

* Individual work
* Combined work
* Work efficiency
* Number of days
* Work-rate calculations

**Status:** ✅ Completed

---

## 📁 Local Code

Folder:

`Day_59_Binary_Search_On_Answer`

Files:

* `59-1_leetcode_koko_eating_bananas.cpp`
* `59-2_leetcode_capacity_to_ship_packages.cpp`

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

## 💡 Key Takeaway

Binary search is not limited to finding an element in a sorted array.

When a problem has:

* a defined range of possible answers, and
* a monotonic feasibility condition,

**Binary Search on Answer** can reduce the search from linear to logarithmic complexity.

---

## 🔥 Reality Check

The difficult part of these problems was not writing the binary search template.

The real challenge was identifying:

**What should I binary search?**

and

**How do I determine whether a particular answer is feasible?**

Understanding these two questions is more important than memorizing the implementation.

---

## 🚀 Next Focus

Continue with the next DSA pattern while maintaining the target of **2 LeetCode problems per day**.
