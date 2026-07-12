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

| Day   | Main Focus                                                                       | Status    |
| ----- | -------------------------------------------------------------------------------- | --------- |
| Day 1 | C++ basics before DSA                                                            | Completed |
| Day 2 | Basic array DSA problems + percentage aptitude practice                          | Completed |
| Day 3 | Array rotations, union/intersection, subarray basics + percentage revision       | Completed |
| Day 4 | Two Sum, Kadane’s Algorithm, stock buy/sell + profit-loss aptitude               | Completed |
| Day 5 | Array patterns, subarrays, merge sorted arrays + profit-loss revision            | Completed |
| Day 6 | Optimized arrays, Dutch National Flag, Boyer-Moore, prefix sum + simple interest | Completed |

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

```
```
## Aptitude Practice

Aptitude practice is tracked inside daily logs.

### Topics Covered

| Day   | Topic                    | Questions Practiced | Status    |
| ----- | ------------------------ | ------------------: | --------- |
| Day 2 | Percentages              |                  10 | Completed |
| Day 3 | Percentages Revision     |                  10 | Completed |
| Day 4 | Profit and Loss Basics   |                  10 | Completed |
| Day 5 | Profit and Loss Revision |                  10 | Completed |
| Day 6 | Simple Interest Basics   |                  10 | Completed |

Detailed aptitude questions, answers, proof, and learnings are recorded in daily logs.

```text
logs/Day_02_Log.md
logs/Day_03_Log.md
logs/Day_04_Log.md
logs/Day_05_Log.md
logs/Day_06_Log.md
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

## Note

This repository is focused on practice, consistency, and proof of learning.

The aim is not to write perfect code from Day 1. The aim is to improve every day through solving problems, debugging mistakes, reviewing logic, and maintaining proper documentation.

```
```
