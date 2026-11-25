# Day 142 Log — Greedy Scheduling and Heaps

**Date:** 25 November 2026  
**Challenge:** 180-Day DSA Preparation  
**Status:** User-reported complete

## 1. LeetCode Problems

### Problem 1: #630 — Course Schedule III

- Topics: Greedy, Sorting, Priority Queue, Max Heap
- Focus: Selecting the maximum number of courses while respecting their deadlines.
- Learning:
  - Sort courses by their deadlines.
  - Track the total duration of selected courses.
  - Use a max heap to keep track of selected course durations.
  - If the total duration exceeds a deadline, remove the longest course.
  - Removing the longest course can create room for more courses.

### Problem 2: #1353 — Maximum Number of Events That Can Be Attended

- Topics: Greedy, Sorting, Priority Queue, Min Heap
- Focus: Attending the maximum number of events when only one event can be attended per day.
- Learning:
  - Sort events by their starting days.
  - Add currently available events to a min heap based on ending days.
  - Attend the event that ends earliest.
  - Remove expired events before making the next selection.

## 2. Aptitude

- Topic: Mensuration — 2D and 3D
- Target: 10 questions
- Completed: 10 questions
- Score: Not recorded

## 3. Required Files

- `142-1_leetcode_course_schedule_iii.cpp`
- `142-2_leetcode_maximum_number_of_events_that_can_be_attended.cpp`

## 4. Key Takeaways

- Priority queues help efficiently maintain the best candidate for a greedy decision.
- A max heap can help revise earlier choices by removing the longest selected course.
- A min heap helps prioritize events with the earliest ending day.
- The correct heap type depends on the decision required by the problem.
- Greedy scheduling becomes easier when deadlines and available choices are managed systematically.

## 5. Mistakes and Improvements

- Specific mistakes: Not recorded.
- Areas requiring revision: Not recorded.
- Next step: Revisit the reasoning behind heap selection and test edge cases involving equal deadlines, expired events, and overlapping schedules.

## 6. Completion Summary

- Both planned LeetCode problems reported complete.
- 10 aptitude questions reported complete.
- Execution completion: 100% based on user report.

## 7. Proof Checklist

- [ ] Both LeetCode submissions show Accepted.
- [ ] Exactly two `.cpp` solution files are saved in the Day 142 folder.
- [ ] Aptitude answers and score are recorded.
- [ ] `logs/Day_142_Log.md` is saved.
- [ ] Git commit and push are verified.
- [ ] LinkedIn post is published.

**Overall:** Day 142 reported complete. Repository, submission, and publication proof remain to be verified.