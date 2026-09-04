# Day 60 — DSA Preparation

## 📅 Day

Day 60 / 180

## 🎯 Focus

**Binary Search — Rotated Sorted Arrays**

Today's focus was on applying binary search to rotated sorted arrays and understanding how to identify the sorted half of the array.

---

## 🧩 LeetCode Problems

### 33. Search in Rotated Sorted Array

**Concepts:**

* Binary Search
* Rotated Sorted Array
* Sorted Half Identification
* O(log n) Search

**Approach:**

* Find the middle element.
* Determine which half of the array is sorted.
* Check whether the target lies inside the sorted half.
* If it does, search that half.
* Otherwise, search the other half.

**Key Learning:**

Even after rotation, at least one half of the array remains sorted. Identifying that sorted half allows binary search to continue efficiently.

**Status:** ✅ Accepted

---

### 153. Find Minimum in Rotated Sorted Array

**Concepts:**

* Binary Search
* Rotated Sorted Array
* Minimum Element
* Search Space Reduction

**Approach:**

* Compare the middle element with the rightmost element.
* If the middle element is greater than the rightmost element, the minimum lies on the right side.
* Otherwise, the minimum lies at the middle or on the left side.
* Continue reducing the search space until the minimum is found.

**Key Learning:**

The relationship between the middle element and the boundary elements can tell us which half contains the minimum.

**Status:** ✅ Accepted

---

## 🧠 DSA Learning

Today's main pattern:

**Binary Search on Rotated Sorted Arrays**

Important questions to ask:

1. Which half is sorted?
2. Is the target inside the sorted half?
3. Which half can be safely eliminated?
4. How can the search space be reduced to O(log n)?

For finding the minimum:

**Compare `mid` with the right boundary → decide which side contains the minimum.**

---

## 🧮 Aptitude

### Topic: Time, Speed & Distance

Completed **10 aptitude questions**.

Topics included:

* Speed
* Distance
* Time
* Relative speed
* Average speed
* Basic time-distance calculations

**Status:** ✅ Completed

---

## 📁 Local Code

Folder:

`Day_60_Binary_Search_Rotated_Array`

Files:

* `60-1_leetcode_search_in_rotated_sorted_array.cpp`
* `60-2_leetcode_find_minimum_in_rotated_sorted_array.cpp`

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

Rotating a sorted array does not completely destroy its sorted structure.

By identifying the sorted half, we can still use binary search and maintain **O(log n)** time complexity.

---

## 🔥 Reality Check

Binary search becomes difficult when the array is not perfectly sorted.

The important skill is not memorizing a modified binary-search template.

The real skill is learning to identify **what information is still guaranteed to be sorted** and using that information to eliminate half of the search space.

---

## 🚀 Next Focus

Continue with advanced binary-search patterns while maintaining the target of **2 LeetCode problems per day**.
