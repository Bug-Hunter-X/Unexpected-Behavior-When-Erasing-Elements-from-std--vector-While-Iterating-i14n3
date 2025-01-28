# Unexpected Behavior When Erasing Elements from std::vector While Iterating

This repository demonstrates a common error in C++ when using `std::vector` and its `erase()` method.  The code attempts to remove elements from a vector while iterating using an index-based loop. This approach is problematic because `erase()` shifts elements, potentially leading to out-of-bounds access or skipping elements.

## Bug Description
The original `bug.cpp` code exhibits unexpected behavior. It intends to empty a vector by removing each element during iteration. However, due to the shifting of elements after each erase operation, the loop does not correctly remove all the elements, leaving unexpected values in the vector.

## Solution
The `bugSolution.cpp` file shows the corrected approach using iterators and the `erase-remove` idiom which avoids shifting elements and solves the issue efficiently.

## How to Reproduce
1. Compile both files (bug.cpp and bugSolution.cpp) using a C++ compiler (e.g., g++).
2. Run each executable and observe the output.  `bug.cpp` will show that the vector is not completely empty, while `bugSolution.cpp` demonstrates the correct behavior.