### Recap

**3 main steps :**

1. Base Case

2. Recursive Call

3. Small Calculation

---

**QUESTION 1 :** Write a program to check if a string is palindrome or not using recursion

**LOGIC :** Palindrome is string/word that reads the same from left to right and right to left

- Examples : madam, noon, mam, ....



**2 Main Approach :**

1. Go from left to right and compare it with right to left

2. using recursion by checking symmetry around middle letter



So for this we take a sample word **abcba** so we have to start with first index 0 and increase it continuously and also take an ending index (length - 1) and decrease it continuously while checking the two, until both become same index.



**For abcba**

s=0 , e= 4   --> we check is string[0] == string[4] answer comes yes so we continue

next, s=1 , e=3   --> we check is string[1] == string[3] answer comes yes so we continue

now finally s == e so we are in middle so base case is reached and function completes



**For nishan**

s=0 , e=5 --> we check is string[0] == string[5] answer comes yes so we continue

next, s=1 , e=4 --> we check is string[1] == string[4] answer comes NO so we exit

---

**QUESTION 2 :** Write a program to reverse an array using recursion

**Logic :** similar to question 1 but instead of checking whether they are equal or not we actually have to swap the two values until start becomes greater than or equal to end.
