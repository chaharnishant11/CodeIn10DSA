**O(N)** in simpler terms means that we can at max apply 1 loop

**Approach 1 :** Take each element "x" one by one and see if elements following it are equal to "n-x" or not
**Issue :** This will require 2 loops, so time complexity will become **O(N^2)**

**Optimal Approach 2 :**
We use the **"Two Pointer"** technique, which is widely used while solving questions of arrays.

in this technique we create 2 pointers that point to same/different locations
and we apply conditions to move these pointers forward or backward

In this particular question (Majority element) we start one pointer from start and one from end and add their values to see wether it is equal to sum or not, 
* If sum is equal to k we increase the answer by one, increase i by one and decrease j by one
* If sum is greater than k we increase i by one keeping j constant for the time being
* If sum is smaller than k we decrease j by one keeping i constant for the time being

As we can see in this approach we are checking and moving in the loop only one time therefore the time complexity is O(N)

**Note :**
Whenever in arrays we have sorted arrays (with O(N)) mostly we will be using 2 main techniques :
- 2 pointer
- Map