# An Overview of QuickSort Algorithm :-

- Sorting is the process of organizing elements in a structured manner.
- Quicksort is one of the most popular sorting algorithms that uses nlogn comparisons to sort an array of n elements in a typical situation.
- It's based on the divide-and-conquer strategy.

# The Idea of QuickSort :-

- Quicksort is a fast sorting algorithm that works by splitting a large array of data into smaller sub-arrays.
- This implies that each iteration works by splitting the input into two components, sorting them, and then recombining them.
- It works by recursively sorting the sub-lists to either side of a given pivot and dynamically shifting elements inside the list around that pivot.

-> As a result, the quick sort method can be summarized in three steps:

1. Pick:   Select an element.
2. Divide: Split the problem set, move smaller parts to the left of the pivot and larger items to the right.
3. Repeat & combine: Repeat the steps and combine the arrays that have previously been sorted.

# Benefits of Quicksort :-

1. It works rapidly and effectively.
2. It has the best time complexity when compared to other sorting algorithms.

# Limitations of Quicksort :-

- Despite being the fastest algorithm, QuickSort has a few drawbacks.

1. This sorting technique is considered unstable since it does not maintain the key-value pairs initial order.
2. When the pivot element is the largest or smallest, or when all of the components have the same size, the performance of the quicksort is significantly impacted by these worst-case scenarios.
3. It’s difficult to implement since it’s a recursive process, especially if recursion isn’t available.