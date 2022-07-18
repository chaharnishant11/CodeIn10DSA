### **Boolean Matrix**
---

**2 Approaches :**

1. Make a temp matrix which is a copy of main loop, then check the elements of the temp matrix and accordingly change the rows and columns of main matrix. This uses 3 loops in total which is not good due to poor Time Complexity (O(N^3))

2. make 2 one dimensional array to store which row or column had a one, and then use that info and change individual elements of the original matrix to 1, This has a lower time complexity (O(N^2))