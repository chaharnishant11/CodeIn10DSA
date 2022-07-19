### **Largest Sum SubArray**
---

**Approaches :**
1. Find all possible sub arrays and find the largest amongst them, Gives TimeLimitExceeded Error due to [Time Complexity (O(N^3)) ]
2. Same as the previous but initializing sum within the first loop itself, This will require only 2 loops thus reducing time complexity to [ O(N^2) ], this still gives TLE
3. using **Kadane's Algorithm**, in which we loop through the array once keeping track of the sum, and converting it to 0, whenever it becomes negative, and if its greater than maxSum we increment maxSum to the bigger value. Time complexity [ O(N) ]

**Note :** 
- Kadane's Algorithm is also used in questions like "Maximum Rectangle"
- If this question asked for the actual sub array with maximum sum, we will make a vector that will append new element when sum is greater than or equal to zero, and will reset to an empty vector whenever the sum is smaller than zero.

**Logic for Kadane Algorithm :**
- While the sum is positive or zero keep on increasing it, since it will either remain constant or increase
- We need to take a new sub array only when sum is negative because going further than that, will only decrease the sum further