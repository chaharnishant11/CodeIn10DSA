### **Find Duplicates in an Array**
---

**Approaches :**
1. Traverse the array and count each element and return elements that come more than one [O(N^2)]
2. Store frequency of all elements in a different array [Time:O(N) but we are using extra space O(N)]
3. add %n for each index [Time:O(N), Space:O(1)]

vector is a dynamic array in c++, so it automatically updates its size to accommodate its elements
pus_back is used to add element to the back of a vector