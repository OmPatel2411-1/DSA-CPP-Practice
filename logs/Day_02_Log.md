# Day 2/180 — DSA Preparation Log

**Date:** 08 July 2026
**Main Focus:** Basic array DSA problems and percentage aptitude practice

## Planned Tasks

1. Start DSA practice with basic array problems.
2. Solve array problems using C++ vectors/arrays.
3. Practice logic without directly depending on built-in shortcuts.
4. Complete percentage-based aptitude questions.
5. Push Day 2 code to GitHub.
6. Add proof of work.
7. Prepare daily LinkedIn progress post.

## Completed Tasks

1. Completed basic array DSA programs.
2. Practiced largest element, second largest element, sorted array check, duplicate removal, left rotation, moving zeroes, missing number, and maximum consecutive ones.
3. Practiced removing duplicates from an unsorted array by sorting first.
4. Completed aptitude practice based on percentages.
5. Added Day 2 files in a separate folder.
6. Prepared proof through GitHub code, screenshots, and aptitude question screenshot/solved answers.

## Programs Completed

* `2-1_largest_element.cpp`
* `2-2_second_largest_element.cpp`
* `2-3_check_array_sorted.cpp`
* `2-4_remove_duplicates_sorted_array.cpp`
* `2-4_remove_duplicates_unsorted_array.cpp`
* `2-5_left_rotate_by_one.cpp`
* `2-6_move_zeroes_to_end.cpp`
* `2-7_missing_number.cpp`
* `2-8_maximum_consecutive_ones.cpp`

## Aptitude Practice

**Topic:** Percentages
**Questions Practiced:** 10
**Status:** Completed
**Proof:** Questions screenshot added. Answers solved separately and score recorded.

## Aptitude Questions Practiced

1. Find 20% of 450.
2. Find 35% of 800.
3. A number is increased from 200 to 250. Find the percentage increase.
4. A number is decreased from 500 to 400. Find the percentage decrease.
5. The price of a product is ₹1200. It is increased by 15%. Find the new price.
6. The price of a product is ₹900. It is decreased by 10%. Find the new price.
7. A student scored 72 marks out of 90. Find the percentage.
8. A shirt costs ₹1500. After a 20% discount, find the selling price.
9. A salary of ₹25,000 is increased by 12%. Find the new salary.
10. A number is first increased by 20% and then decreased by 20%. Check whether the final number is the same as the original number using 100 as an example.

## Aptitude Answers

1. 20% of 450 = 90
2. 35% of 800 = 280
3. Increase from 200 to 250 = 25%
4. Decrease from 500 to 400 = 20%
5. New price after 15% increase on ₹1200 = ₹1380
6. New price after 10% decrease on ₹900 = ₹810
7. Percentage for 72 marks out of 90 = 80%
8. Selling price after 20% discount on ₹1500 = ₹1200
9. New salary after 12% increase on ₹25,000 = ₹28,000
10. Final number is not the same. If original number is 100, after 20% increase it becomes 120, and after 20% decrease it becomes 96.

## What I Learned

* Array problems require clear logic, not just syntax.
* For removing duplicates from a sorted array, two-pointer style logic works because duplicate elements are together.
* For an unsorted array, sorting first makes duplicate removal easier, but it changes the original order.
* Moving zeroes to the end can be solved by first placing non-zero elements and then filling the remaining positions with zeroes.
* Missing number problems can be solved using the expected sum and actual sum.
* Maximum consecutive ones requires resetting the current count whenever a zero appears.
* Aptitude also needs regular practice because DSA alone is not enough for screening rounds.
* Percentage problems become easier when the original value, increase/decrease value, and final value are clearly identified.

## Mistakes / Errors Faced

* Mixed reverse vector logic with duplicate-removal logic in one program.
* Used incorrect syntax like `v.start` and `v.end`, which does not exist in C++ vectors.
* Needed clarity between solving one problem per file and combining unrelated logic.
* Needed to remember that duplicate removal logic works directly only when the array is sorted.
* Aptitude proof was initially weak because only the question screenshot was considered.

## How I Fixed Them

* Separated the logic into the correct problem file.
* Replaced invalid vector syntax with normal variables like `start` and `end`.
* Removed unnecessary reverse logic from duplicate-removal code.
* Added sorting logic for the unsorted duplicate-removal version.
* Focused on solving one problem per file.
* Added aptitude questions and answers properly inside the Day 2 log.

## Proof of Work

**GitHub:** Day 2 array files pushed under `Day_02_Arrays_Basics`.
**Screenshots:** Code/output screenshots added.
**Aptitude Proof:** Questions screenshot added; answers solved separately and recorded in this log.
**LinkedIn Post:** Prepared/posted Day 2 progress post.

## Completion Percentage

**DSA:** 100%
**Aptitude:** 100%
**Proof:** Completed
**LinkedIn:** Pending/Completed
**Overall:** 100% after GitHub push and LinkedIn post

## Reality Check

Day 2 was more useful than Day 1 because actual DSA practice started. The mistake in duplicate removal showed that understanding the problem statement matters more than just writing code. Mixing two problems in one file is poor structure and needs to be avoided.

The aptitude part was completed, but from tomorrow the proof should be stronger. A question screenshot alone is not enough. Solved answers or score tracking should also be recorded.

The focus from here should be clean logic, clean files, dry runs, aptitude practice, and consistent daily proof.

## Next Day Focus

Continue arrays with slightly stronger problems:

1. Right rotate array by one
2. Left rotate array by k places
3. Right rotate array by k places
4. Union of two sorted arrays
5. Intersection of two sorted arrays
6. Find number that appears once
7. Longest subarray with given sum
8. Basic aptitude practice
