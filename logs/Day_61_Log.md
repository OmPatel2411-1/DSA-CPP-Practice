# Day 61 — DSA Preparation

## 📅 Day

Day 61 / 180

## 🎯 Focus

**Advanced Binary Search — Binary Search on Answer**

Today's focus was on applying binary search to optimization problems where the answer itself lies within a numerical range.

---

## 🧩 LeetCode Problems

### 1482. Minimum Number of Days to Make m Bouquets

**Concepts:**

* Binary Search on Answer
* Greedy
* Feasibility Check
* Search Space

**Approach:**

* The minimum possible answer is the minimum bloom day.
* The maximum possible answer is the maximum bloom day.
* For a candidate day, count how many bouquets can be created.
* Only adjacent flowers that have already bloomed can form a bouquet.
* If at least `m` bouquets can be made, search for an earlier day.
* Otherwise, increase the number of days.

**Key Learning:**

A candidate answer can be tested efficiently, and the feasibility of making the required bouquets is monotonic.

**Status:** ✅ Accepted

---

### 410. Split Array Largest Sum

**Concepts:**

* Binary Search on Answer
* Greedy Partitioning
* Minimizing the Maximum
* Search Space Reduction

**Approach:**

* The minimum possible largest subarray sum is the largest element.
* The maximum possible value is the total sum of the array.
* For a candidate maximum sum, greedily divide the array into subarrays.
* Count how many partitions are required.
* If the array can be split into at most `k` parts, try a smaller maximum sum.
* Otherwise, increase the candidate value.

**Key Learning:**

Problems asking to **minimize the maximum value** can often be solved by binary searching the possible answer and checking feasibility.

**Status:** ✅ Accepted

---

## 🧠 DSA Learning

Today's main pattern:

### Binary Search on Answer

General approach:

1. Determine the minimum possible answer.
2. Determine the maximum possible answer.
3. Pick the middle value.
4. Check whether the candidate answer is feasible.
5. If feasible, search for a smaller answer.
6. If not feasible, search for a larger answer.

The most important part is designing the **feasibility check**.

---

## 🧮 Aptitude

### Topic: Time, Speed & Distance

Completed **10 aptitude questions**.

Topics included:

* Trains
* Relative speed
* Average speed
* Motion
* Time-distance calculations

**Status:** ✅ Completed

---

## 📁 Local Code

Folder:

`Day_61_Binary_Search_Advanced`

Files:

* `61-1_leetcode_minimum_number_of_days_to_make_m_bouquets.cpp`
* `61-2_leetcode_split_array_largest_sum.cpp`

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

Today's biggest lesson was recognizing the **Binary Search on Answer** pattern.

Instead of searching for an element, the algorithm searches for the smallest or largest value that satisfies a given condition.

---

## 🔥 Reality Check

Knowing the binary search template is not enough.

The difficult part is identifying:

**What is my search space?**

and

**How can I efficiently verify whether a candidate answer works?**

Once those two things are clear, the binary search itself becomes much easier.

---

## 🚀 Next Focus

Continue with the next DSA pattern while maintaining the target of **2 LeetCode problems per day**.
