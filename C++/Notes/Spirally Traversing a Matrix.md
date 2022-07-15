### **Spirally Traversing a Matrix**
---

**Approach :**

Take 4 variables left,right,top and bottom.
Initial values of the 4 are 0, n-1, 0 and m-1 respectively.

Keep moving in spiral and when you reach the end of any arm, make appropriate changes to respective variables to remove that arm(row/column) that you just traversed.
Example if we go from left to right for first time, we have traversed an entire arm of the spiral so we should remove the 0th row, and to do so we increase top by 1, and so on for other arms.

Remember we move in 4 steps
    1. Left -> Right      (top++)
    2. Top -> Bottom      (right--)
    3. Right -> Left      (bottom--)
    4. Bottom -> Top      (left++)

We will continue this while bottom>=top and left<=right