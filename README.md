Copy this complete updated `README.md`:

````md
# DSA CPP Practice

This repository contains my C++ and DSA practice work.

The goal is to build consistency, improve problem-solving skills, and maintain proof of daily learning through code, logs, and regular practice.

## Current Focus

* C++ programming
* Data Structures and Algorithms
* Problem-solving practice
* Aptitude practice
* Daily progress tracking
* GitHub-based proof of work

## Why This Repository Exists

I am using this repository to track my coding practice in a structured way.

Each day contains:

* Code files
* Practice problems
* Daily log
* Mistakes and fixes
* Proof of work
* Next day focus

This is not a project showcase repository. This is a practice and consistency repository.

## Folder Structure

```text
DSA-CPP-Practice/
├── README.md
├── logs/
│   ├── Day_01_Log.md
│   ├── Day_02_Log.md
│   ├── Day_03_Log.md
│   └── Day_04_Log.md
├── Day_01_CPP_Basics/
│   ├── 1-1_hello_world.cpp
│   ├── 1-2_print_details.cpp
│   ├── 1-3_add_two_numbers.cpp
│   └── ...
├── Day_02_Arrays_Basics/
│   ├── 2-1_largest_element.cpp
│   ├── 2-2_second_largest_element.cpp
│   ├── 2-3_check_array_sorted.cpp
│   └── ...
├── Day_03_Arrays_Practice/
│   ├── 3-1_right_rotate_by_one.cpp
│   ├── 3-2_left_rotate_by_k.cpp
│   ├── 3-3_right_rotate_by_k.cpp
│   └── ...
└── Day_04_Arrays_Intermediate/
    ├── 4-1_two_sum_bruteforce.cpp
    ├── 4-2_two_sum_using_map.cpp
    ├── 4-3_sort_0s_1s_2s.cpp
    └── ...
````

## File Naming Format

Each program follows this format:

```text
dayNumber-programNumber_program_name.cpp
```

Example:

```text
1-1_hello_world.cpp
1-2_print_details.cpp
1-3_add_two_numbers.cpp
2-1_largest_element.cpp
2-2_second_largest_element.cpp
3-1_right_rotate_by_one.cpp
4-1_two_sum_bruteforce.cpp
```

This naming format makes the repository easier to track, review, and maintain.

## Progress Summary

| Day    | Main Focus                                                                       | Status    |
| ------ | -------------------------------------------------------------------------------- | --------- |
| Day 1  | C++ basics before DSA                                                            | Completed |
| Day 2  | Basic array DSA problems + percentage aptitude practice                          | Completed |
| Day 3  | Array rotations, union/intersection, subarray basics + percentage revision       | Completed |
| Day 4  | Two Sum, Kadane’s Algorithm, stock buy/sell + profit-loss aptitude               | Completed |
| Day 5  | Array patterns, subarrays, merge sorted arrays + profit-loss revision            | Completed |
| Day 6  | Optimized arrays, Dutch National Flag, Boyer-Moore, prefix sum + simple interest | Completed |
| Day 7  | Array revision, mixed practice, weak-area check + simple interest revision       | Completed |
| Day 8  | Pre-LeetCode array practice, LeetCode-style local problems + mixed aptitude      | Completed |
| Day 9  | First LeetCode day, Easy array problems + mixed aptitude                         | Completed |
| Day 10 | LeetCode Easy arrays, in-place problems, README profile update + aptitude        | Completed |
| Day 11 | LeetCode Easy arrays, condition handling, set logic + aptitude                   | Completed |
| Day 12 | LeetCode Easy arrays, two-pointer, sorting, frequency logic + aptitude           | Completed |

## Day 1 — C++ Basics

### Concepts Practiced

* Input and output
* Variables and data types
* Operators
* If-else conditions
* Loops
* Functions
* Arrays
* Strings
* Vectors
* Extra vector practice

### Day 1 Files

```text
1-1_hello_world.cpp
1-2_print_details.cpp
1-3_add_two_numbers.cpp
1-4_basic_operations.cpp
1-5_area_of_circle.cpp
1-6_average_of_three_numbers.cpp
1-7_remainder_of_two_numbers.cpp
1-8_divisible_by_5_and_11.cpp
1-9_even_or_odd.cpp
1-10_positive_negative_zero.cpp
1-11_greatest_of_two_numbers.cpp
1-12_greatest_of_three_numbers.cpp
1-13_leap_year.cpp
1-14_print_1_to_n.cpp
1-15_print_n_to_1.cpp
1-16_sum_of_n_numbers.cpp
1-17_factorial.cpp
1-18_count_digits.cpp
1-19_reverse_number.cpp
1-20_palindrome_number.cpp
1-21_prime_number.cpp
1-22_function_addition.cpp
1-23_function_factorial.cpp
1-24_function_prime_number.cpp
1-25_function_reverse_number.cpp
1-26_input_print_array.cpp
1-27_sum_of_array.cpp
1-28_maximum_element_array.cpp
1-29_minimum_element_array.cpp
1-30_linear_search.cpp
1-31_reverse_array.cpp
1-32_reverse_string.cpp
1-33_palindrome_string.cpp
1-34_count_vowels.cpp
1-35_vector_input_output.cpp
1-36_sort_vector.cpp
1-37_vector_sum.cpp
1-38_vector_maximum_element.cpp
1-39_vector_minimum_element.cpp
1-40_vector_reverse.cpp
1-41_vector_linear_search.cpp
1-42_vector_even_odd_count.cpp
```

## Day 2 — Basic Array DSA Problems

### Concepts Practiced

* Array traversal
* Largest element
* Second largest element
* Sorted array checking
* Removing duplicates from sorted array
* Removing duplicates from unsorted array using sorting
* Left rotation by one
* Moving zeroes to the end
* Missing number using sum formula
* Maximum consecutive ones

### Day 2 Files

```text
2-1_largest_element.cpp
2-2_second_largest_element.cpp
2-3_check_array_sorted.cpp
2-4_remove_duplicates_sorted_array.cpp
2-4_remove_duplicates_unsorted_array.cpp
2-5_left_rotate_by_one.cpp
2-6_move_zeroes_to_end.cpp
2-7_missing_number.cpp
2-8_maximum_consecutive_ones.cpp
```

### Day 2 Key Learnings

* Array problems need clear logic, not just syntax.
* One file should solve one problem clearly.
* Duplicate-removal logic works directly only when the array is sorted.
* For an unsorted array, sorting first helps remove duplicates, but it changes the original order.
* Moving zeroes to the end can be solved by placing non-zero elements first and then filling the remaining positions with zeroes.
* Missing number can be solved using expected sum and actual sum.
* Maximum consecutive ones requires resetting the current count whenever a zero appears.

## Day 3 — Array Practice

### Concepts Practiced

* Right rotate array by one
* Left rotate array by k places
* Right rotate array by k places
* Union of two sorted arrays
* Intersection of two sorted arrays
* Number appearing once using XOR
* Longest subarray with sum k for positive numbers
* Frequency count using map

### Day 3 Files

```text
3-1_right_rotate_by_one.cpp
3-2_left_rotate_by_k.cpp
3-3_right_rotate_by_k.cpp
3-4_union_of_two_sorted_arrays.cpp
3-5_intersection_of_two_sorted_arrays.cpp
3-6_number_appearing_once.cpp
3-7_longest_subarray_with_sum_k_positive.cpp
3-8_count_frequency_of_elements.cpp
```

### Day 3 Key Learnings

* Rotation problems require careful index handling.
* `k = k % n` is important when rotation count is greater than array size.
* Union and intersection problems need clear duplicate handling.
* XOR can be used to find the number appearing once when every other number appears twice.
* Subarray problems require clear understanding of start and end indexes.
* Frequency counting becomes easier using `map`.

## Day 4 — Intermediate Array Practice

### Concepts Practiced

* Two Sum using brute force
* Two Sum using map
* Sorting 0s, 1s, and 2s
* Majority element using brute force
* Maximum subarray sum using brute force
* Kadane’s Algorithm
* Best time to buy and sell stock
* Rearranging positive and negative numbers using a basic approach

### Day 4 Files

```text
4-1_two_sum_bruteforce.cpp
4-2_two_sum_using_map.cpp
4-3_sort_0s_1s_2s.cpp
4-4_majority_element_bruteforce.cpp
4-5_maximum_subarray_sum_bruteforce.cpp
4-6_kadanes_algorithm.cpp
4-7_best_time_to_buy_sell_stock.cpp
4-8_rearrange_positive_negative_basic.cpp
```

### Day 4 Key Learnings

* Two Sum can be solved using brute force first, then improved using map.
* `target - current` is the key idea behind map-based Two Sum.
* Counting approach can sort arrays containing only 0s, 1s, and 2s.
* Majority element brute force checks the frequency of every element.
* Maximum subarray sum can be understood first using brute force.
* Kadane’s Algorithm improves maximum subarray sum using an optimized approach.
* Stock buy/sell requires tracking the minimum price before calculating profit.
* Basic rearrangement becomes easier by separating positive and negative values first.

## Day 5 — Array Patterns Practice

### Concepts Practiced

* Leaders in an array
* Longest consecutive sequence using sorting
* Rearranging array by sign using a basic approach
* Printing all subarrays
* Maximum product subarray using brute force
* Merging two sorted arrays using two pointers
* Finding duplicate number using sorting
* Finding missing and repeating number using frequency array

### Day 5 Files

```text
5-1_leaders_in_array.cpp
5-2_longest_consecutive_sequence_bruteforce.cpp
5-3_rearrange_array_by_sign_basic.cpp
5-4_print_all_subarrays.cpp
5-5_maximum_product_subarray_bruteforce.cpp
5-6_merge_two_sorted_arrays.cpp
5-7_find_duplicate_number_basic.cpp
5-8_find_missing_and_repeating_basic.cpp
```
### Day 5 Key Learnings
* Leaders in an array require checking right-side elements.
* Longest consecutive sequence becomes easier after sorting.
* Printing all subarrays helps build a strong foundation for subarray-based problems.
* Maximum product subarray requires careful handling of negative numbers.
* Merging two sorted arrays can be solved using two pointers.
* Duplicate number can be found using sorting and adjacent comparison.
* Missing and repeating number can be solved using frequency counting.

## Day 6 — Optimized Array Practice

### Concepts Practiced

* Leaders in an array using optimized right-to-left traversal
* Longest consecutive sequence using set
* Sorting 0s, 1s, and 2s using Dutch National Flag algorithm
* Majority element using Boyer-Moore Voting Algorithm
* Kadane’s Algorithm revision
* Prefix sum array
* Subarray sum equals k using brute force
* Subarray sum equals k using prefix sum and map

### Day 6 Files

```text
6-1_leaders_in_array_optimized.cpp
6-2_longest_consecutive_sequence_using_set.cpp
6-3_sort_0s_1s_2s_dutch_national_flag.cpp
6-4_majority_element_boyer_moore.cpp
6-5_kadanes_algorithm_revision.cpp
6-6_prefix_sum_array.cpp
6-7_subarray_sum_equals_k_bruteforce.cpp
6-8_subarray_sum_equals_k_prefix_sum.cpp

```
## Day 6 Key Learnings
* Leaders in an array can be optimized by traversing from right to left.
* Longest consecutive sequence can be solved using set by starting only from the beginning of a sequence.
* Dutch National Flag algorithm uses low, mid, and high pointers.
* Boyer-Moore Voting Algorithm uses candidate and count to find the majority element.
* Prefix sum is useful for solving subarray problems efficiently.
* Subarray sum equals k can be optimized using prefix sum and map.


## Day 7 — Array Revision and Weak-Area Check

### Concepts Practiced

* Two Sum revision using unordered_map
* Kadane’s Algorithm revision
* Dutch National Flag algorithm revision
* Boyer-Moore Voting Algorithm revision
* Prefix sum revision
* Subarray sum equals k using prefix sum and map
* Merge two sorted arrays using two pointers
* Array weak-topic notes

### Day 7 Files

```text
7-1_two_sum_revision.cpp
7-2_kadanes_algorithm_revision.cpp
7-3_dutch_national_flag_revision.cpp
7-4_boyer_moore_revision.cpp
7-5_prefix_sum_revision.cpp
7-6_subarray_sum_equals_k_revision.cpp
7-7_merge_two_sorted_arrays_revision.cpp
7-8_array_weak_topics_notes.cpp

```
## Day 7 Key Learnings
* Revision is necessary before moving to harder problems.
* Two Sum using map depends on finding target - current.
* Kadane’s Algorithm requires understanding when to reset the current sum.
* Dutch National Flag requires careful pointer movement.
* Boyer-Moore uses candidate and count to find the majority element.
* Prefix sum is important for subarray-based problems.
* Weak-topic notes help identify what needs more practice.

## Day 8 — Pre-LeetCode Array Practice

### Concepts Practiced

* Two Sum index version
* Best time to buy and sell stock revision
* Maximum subarray using Kadane’s Algorithm
* Move zeroes in-place
* Remove duplicates from sorted array
* Single number using XOR
* Contains duplicate using set
* Plus One basic problem

### Day 8 Files

```text
8-1_two_sum_index_version.cpp
8-2_best_time_to_buy_sell_stock_revision.cpp
8-3_maximum_subarray_revision.cpp
8-4_move_zeroes_in_place.cpp
8-5_remove_duplicates_sorted_array_revision.cpp
8-6_single_number_revision.cpp
8-7_contains_duplicate.cpp
8-8_plus_one_basic.cpp

```
### Day 8 Key Learnings
* LeetCode-style Two Sum requires returning indexes, not values.
* Move Zeroes requires in-place modification.
* Remove duplicates from sorted array uses a two-pointer style approach.
* Single Number can be solved using XOR.
* Contains Duplicate can be solved using set.
* Plus One requires careful carry handling.
* Solving LeetCode-style problems locally helps reduce confusion before platform submissions.

## Day 9 — First LeetCode Day

### Concepts Practiced

* Two Sum on LeetCode
* Best Time to Buy and Sell Stock on LeetCode
* Maximum Subarray on LeetCode
* Move Zeroes on LeetCode
* Single Number on LeetCode
* Saving accepted LeetCode solutions locally
* Understanding LeetCode function signatures

### Day 9 Files

```text
9-1_leetcode_two_sum.cpp
9-2_leetcode_best_time_to_buy_sell_stock.cpp
9-3_leetcode_maximum_subarray.cpp
9-4_leetcode_move_zeroes.cpp
9-5_leetcode_single_number.cpp

```
### Day 9 Key Learnings
* LeetCode uses predefined function signatures.
* main() is not required on LeetCode.
* Two Sum asks for indexes, not values.
* Move Zeroes requires in-place modification.
* Kadane’s Algorithm is useful for Maximum Subarray.
* XOR is useful for Single Number.
* Accepted LeetCode solutions should be saved locally for GitHub proof.

## Day 10 — LeetCode Easy Arrays

### Concepts Practiced

* Remove Duplicates from Sorted Array on LeetCode
* Contains Duplicate on LeetCode
* Plus One on LeetCode
* Merge Sorted Array on LeetCode
* Majority Element on LeetCode
* In-place array modification
* LeetCode return types and function signatures
* README coding profile update

### Day 10 Files

```text
10-1_leetcode_remove_duplicates_from_sorted_array.cpp
10-2_leetcode_contains_duplicate.cpp
10-3_leetcode_plus_one.cpp
10-4_leetcode_merge_sorted_array.cpp
10-5_leetcode_majority_element.cpp
```
### Day 10 Key Learnings
* Remove Duplicates returns the number of unique elements.
* Contains Duplicate can be solved using unordered set.
* Plus One requires carry handling.
* Merge Sorted Array should be solved from the end.
* Majority Element can be solved using Boyer-Moore Voting Algorithm.
* In-place array problems require careful understanding of the expected output.

## Day 11 — LeetCode Easy Arrays

### Concepts Practiced

* Valid Mountain Array on LeetCode
* Squares of a Sorted Array on LeetCode
* Find Pivot Index on LeetCode
* Missing Number on LeetCode
* Intersection of Two Arrays on LeetCode
* Strict condition handling
* Sum-based array logic
* Set-based intersection logic

### Day 11 Files

```text
11-1_leetcode_valid_mountain_array.cpp
11-2_leetcode_squares_of_a_sorted_array.cpp
11-3_leetcode_find_pivot_index.cpp
11-4_leetcode_missing_number.cpp
11-5_leetcode_intersection_of_two_arrays.cpp
```
## Day 11 Key Learnings
* Valid Mountain Array requires strict increase and strict decrease.
* Equal adjacent values are not allowed in a mountain array.
* Squares of a Sorted Array can be solved using square and sort first.
* Pivot Index depends on comparing left sum and right sum.
* Missing Number can be solved using expected sum and actual sum.
* Intersection of Two Arrays can be solved using unordered set.

## Day 12 — LeetCode Easy Arrays

### Concepts Practiced

* Two Sum II - Input Array Is Sorted on LeetCode
* Remove Element on LeetCode
* Search Insert Position on LeetCode
* Array Partition on LeetCode
* Intersection of Two Arrays II on LeetCode
* Two-pointer logic
* In-place array modification
* Sorting-based logic
* Frequency counting using map

### Day 12 Files

```text
12-1_leetcode_two_sum_ii_input_array_is_sorted.cpp
12-2_leetcode_remove_element.cpp
12-3_leetcode_search_insert_position.cpp
12-4_leetcode_array_partition.cpp
12-5_leetcode_intersection_of_two_arrays_ii.cpp
```

### Day 12 Key Learnings
* Two Sum II uses two pointers because the input array is sorted.
* Two Sum II returns 1-based indexes.
* Remove Element modifies the array in-place and returns the new valid length.
* Search Insert Position can be solved linearly first, but binary search should be learned later.
* Array Partition becomes easier after sorting.
* Intersection of Two Arrays II requires frequency counting because duplicates matter.


## Aptitude Practice

Aptitude practice is tracked inside daily logs.

### Topics Covered

| Day    | Topic                    | Questions Practiced | Status    |
| ------ | ------------------------ | ------------------: | --------- |
| Day 2  | Percentages              |                  10 | Completed |
| Day 3  | Percentages Revision     |                  10 | Completed |
| Day 4  | Profit and Loss Basics   |                  10 | Completed |
| Day 5  | Profit and Loss Revision |                  10 | Completed |
| Day 6  | Simple Interest Basics   |                  10 | Completed |
| Day 7  | Simple Interest Revision |                  10 | Completed |
| Day 8  | Mixed Revision           |                  10 | Completed |
| Day 9  | Mixed Revision           |                  10 | Completed |
| Day 10 | Mixed Revision           |                  10 | Completed |
| Day 11 | Mixed Revision           |                  10 | Completed |
| Day 12 | Mixed Revision           |                  10 | Completed |


Detailed aptitude questions, answers, proof, and learnings are recorded in daily logs.

```text
logs/Day_01_Log.md
logs/Day_02_Log.md
logs/Day_03_Log.md
logs/Day_04_Log.md
logs/Day_05_Log.md
logs/Day_06_Log.md
logs/Day_07_Log.md
logs/Day_08_Log.md
logs/Day_09_Log.md
logs/Day_10_Log.md
logs/Day_11_Log.md
logs/Day_12_Log.md
```

## Daily Logs

Daily logs are stored inside the `logs` folder.

Each log includes:

* Planned tasks
* Completed tasks
* Incomplete tasks
* Programs completed
* Aptitude practice
* Mistakes and errors faced
* Fixes applied
* Proof of work
* Completion percentage
* Reality check
* Next day focus

## Logs Added

```text
logs/Day_01_Log.md
logs/Day_02_Log.md
logs/Day_03_Log.md
logs/Day_04_Log.md
logs/Day_05_Log.md
```

## Proof of Work

Proof is maintained through:

* Code files
* GitHub commits
* Daily logs
* Screenshots
* Aptitude practice proof
* LinkedIn progress posts
* GitHub: https://github.com/OmPatel2411-1
* LeetCode: https://leetcode.com/u/OmPatel2411/

## Long-Term Goal

The long-term goal is to become stronger in:

* C++ programming
* DSA problem solving
* Aptitude
* Debugging
* Technical communication
* Interview preparation
* Consistency and discipline

## Current Status

* Day 1 completed: C++ basics and vector practice.
* Day 2 completed: Basic array DSA problems and percentage aptitude practice.
* Day 3 completed: Array rotations, union/intersection, subarray basics, frequency counting, and percentage revision.
* Day 4 completed: Two Sum, Kadane’s Algorithm, stock buy/sell, rearrangement basics, and profit-loss aptitude.
* Day 5 completed: Array patterns, subarrays, merge sorted arrays, missing/repeating numbers, and profit-loss revision.
* Day 6 completed: Optimized arrays, Dutch National Flag, Boyer-Moore, prefix sum, and simple interest aptitude.
* Day 7 completed: Array revision, mixed practice, weak-area check, and simple interest revision.
* Day 8 completed: Pre-LeetCode array practice, LeetCode-style local problems, and mixed aptitude revision.
* Day 9 completed: First LeetCode day, 5 Easy array problems accepted, local solutions saved, and mixed aptitude revision completed.
* Day 10 completed: LeetCode Easy array problems, in-place array practice, README coding profile update, and mixed aptitude revision.
* Day 11 completed: LeetCode Easy array problems, condition handling, set logic, local solution proof, and mixed aptitude revision.
* Day 12 completed: LeetCode Easy array problems, two-pointer logic, sorting-based logic, frequency counting, local solution proof, and mixed aptitude revision.

## Note

This repository is focused on practice, consistency, and proof of learning.

The aim is not to write perfect code from Day 1. The aim is to improve every day through solving problems, debugging mistakes, reviewing logic, and maintaining proper documentation.

```
```
