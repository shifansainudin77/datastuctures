# Merge Sort and Quick Sort for Fixed-Length Social Media IDs

## Problem Statement

A social media application needs to sort the following fixed-length IDs:

324, 125, 456, 218, 102, 389, 275, 147

The objective is to:

1. Implement Merge Sort for the given IDs.
2. Record the array after each merge pass.
3. Implement Quick Sort for the same input.
4. Record the important partition steps and final sorted output.
5. Compare both algorithms based on:
   - Number of passes and partitions
   - Number of comparisons and operations
   - Time complexity
   - Space complexity
6. Analyse which approach is suitable for sorting large fixed-length keys.

---

# Input Data

The given input is:

324 125 456 218 102 389 275 147

---

# (a) Merge Sort

## Source Code

The complete Merge Sort implementation is provided in the source-code file in this repository.

The implementation uses bottom-up Merge Sort. The size of the sorted runs is doubled after every pass.

## Merge Sort Passes

### Original Array

324 125 456 218 102 389 275 147

### Pass 1

125 324 218 456 102 389 147 275

### Pass 2

125 218 324 456 102 147 275 389

### Pass 3

102 125 147 218 275 324 389 456

## Final Merge Sort Output

102 125 147 218 275 324 389 456

## Merge Sort Results

Number of passes = 3

Comparisons = 17

Major operations = 41

The complete Merge Sort output is available in the output file in this repository.

---

# (b) Quick Sort

## Source Code

The complete Quick Sort implementation is provided in the source-code file in this repository.

The implementation uses the last element of each partition as the pivot.

## Quick Sort Execution

### Original Array

324 125 456 218 102 389 275 147

### Partition 1

Pivot = 147

125 102 147 218 324 389 275 456

### Partition 2

Pivot = 102

102 125 147 218 324 389 275 456

### Partition 3

Pivot = 456

102 125 147 218 324 389 275 456

### Partition 4

Pivot = 275

102 125 147 218 275 389 324 456

### Partition 5

Pivot = 324

102 125 147 218 275 324 389 456

## Final Quick Sort Output

102 125 147 218 275 324 389 456

## Quick Sort Results

Number of partitions = 5

Comparisons = 16

Swaps = 6

The complete Quick Sort output is available in the output file in this repository.

---

# (c) Complexity Analysis

## Merge Sort

Best Case Time Complexity:

O(n log n)

Average Case Time Complexity:

O(n log n)

Worst Case Time Complexity:

O(n log n)

Space Complexity:

O(n)

Merge Sort requires additional memory for the temporary array used during merging.

---

## Quick Sort

Best Case Time Complexity:

O(n log n)

Average Case Time Complexity:

O(n log n)

Worst Case Time Complexity:

O(n²)

Average Space Complexity:

O(log n)

Worst Case Space Complexity:

O(n)

Quick Sort requires recursion stack space. The worst case occurs when the partitions become highly unbalanced.

---

# Comparison Table

| Parameter | Merge Sort | Quick Sort |
|---|---|---|
| Sorting Method | Divide and Merge | Divide and Partition |
| Passes / Partitions | 3 passes | 5 partitions |
| Comparisons | 17 | 16 |
| Major Operations | 41 | — |
| Swaps | — | 6 |
| Best Case | O(n log n) | O(n log n) |
| Average Case | O(n log n) | O(n log n) |
| Worst Case | O(n log n) | O(n²) |
| Additional Space | O(n) | O(log n) average |
| Worst Case Space | O(n) | O(n) |
| Pivot Required | No | Yes |

Note: The operation counts depend on the exact implementation, input data and pivot strategy.

---

# Final Sorted Output

Both algorithms produce the same final sorted sequence:

102 125 147 218 275 324 389 456

---

# Final Conclusion

Both Merge Sort and Quick Sort successfully sort the given fixed-length social media IDs.

For the given input, Merge Sort requires 3 passes and performs 17 comparisons. Quick Sort requires 5 partition calls and performs 16 comparisons and 6 swaps.

Merge Sort has a guaranteed O(n log n) worst-case time complexity, but it requires O(n) additional space.

Quick Sort has an average time complexity of O(n log n) and generally requires less additional space. However, its worst-case time complexity can become O(n²) when the partitions are highly unbalanced.

For large fixed-length keys, the choice depends on the requirements of the application. Merge Sort provides predictable worst-case performance, while Quick Sort can provide good average-case performance with lower additional memory usage.

---

# Repository Contents

The repository contains the source code, input data, output data and analysis files required for the assignment.

Files include:

README.md
input.txt
merge_sort.c
merge_sort_output.txt
quick_sort.c
quick_sort_output.txt
output.txt
comparison_table.md
complexity_analysis.md
final_conclusion.md

---

# How to Run

## Compile Merge Sort

gcc merge_sort.c -o merge_sort

## Run Merge Sort

./merge_sort

## Compile Quick Sort

gcc quick_sort.c -o quick_sort

## Run Quick Sort

./quick_sort

---

# Summary

Input:

324 125 456 218 102 389 275 147

Merge Sort:

3 passes
17 comparisons
41 major operations
O(n log n) worst-case time
O(n) additional space

Quick Sort:

5 partitions
16 comparisons
6 swaps
O(n log n) average-case time
O(n²) worst-case time
O(log n) average additional space

Final Output:

102 125 147 218 275 324 389 456
