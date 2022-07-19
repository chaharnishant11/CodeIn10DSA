**Problem :** Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

**3 Approaches :**
1. Using internal sort function of the language (Time Complexity : O(N logN) )
2. Using count sort (in this method we go through the loop once counting the number of 0s,1s and 2s and then place that number of 0s,1s,2s in a sequence in another array) (Time Complexity : O(2n) or O(N) )
3. Dutch Flag Algorithm ( O(N) )

**Dutch Flag Algorithm :** this technique has 3 pointers; low,mid and high. In this technique we will have 0s from 0 to low-1, 1s from low to high, 2s from high+1 to n-1