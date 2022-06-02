---

### Revision

**3 Basic Steps of Recursion:**

1. Base Case

2. Recursive Call

3. Small Calculation

---

### Count Ways to Reach Nth Stair Problem :



**Question :** Count Ways to Reach N<sup>th</sup> Stair (person only jumps 1 or 2 stairs at a time)

**Logic :** suppose we have to reach on top of 6 stairs, now there are multiple ways to do it:

1<sup>st</sup> is to go 1 stair at a time, 2<sup>nd</sup> way is to jump 2 stairs at first and then 1 at a time, 3<sup>rd</sup> might be to go first 1 stair then 2 stair and so on...

so, we have **Multiple Cases**

Since the maximum stairs that we can jump is 2; so the number of ways to reach the top stair are equal to sum ways of reaching the previous 2 stairs

**NOTE : This part is quite similar to the Fibonacci Series**

**Recursive call :** F(n) = F(n-1) + F(n-2)                Same as Fibonacci

BUT there is a difference and it is in the base case

In Fibonacci base cases were : F(0) = 0 and F(1) = 1

& Here in n<sup>th</sup> stair  base cases are : F(1) = 1 and F(2) = 2

**Reason for this :** If you have just one stair and you are on the ground there is just one way to reach the 1 stair and that is to jump one stair. If you have 2 stairs then you have 2 ways: First is that you jump 1 stair to reach 1<sup>st</sup> stair and then again jump one more stair to reach 2<sup>nd</sup> stair. Second way is to directly jump 2 stairs since that is the max we are allowed to jump at once.



And just as Fibonacci series even this question results in a **non-linear branched Recursive Tree** very similar to the one in Fibonacci.

---

**Final Note :** This question actually belongs to Dynamic Programming (DP) and therefore recursion is not the most efficient way to do it.

---
