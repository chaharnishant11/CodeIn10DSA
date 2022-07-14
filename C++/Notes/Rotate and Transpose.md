### **Rotate & Transpose**
---

**Question 1 :**
Transpose a Matrix

**Approaches :**
1. Swap the lower triangle elements of a matrix with the upper triangle elements and leave the diagonal unchanged
2. Make a copy of current matrix and replace matrix[i][j] to copy[j][i] (This approach is a bit more simpler to understand but takes more time)



**Question 2 :**
Rotate matrix by 90 degree

**Approaches :**
1. Swap the lower triangle elements of a matrix with the upper triangle elements and leave the diagonal unchanged, then again swap entire row[i] and row[n-i-1]