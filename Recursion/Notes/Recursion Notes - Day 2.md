# Recursive Tree

It is the pictorial/graphical representation of a recursion. It is used to solve and/or better understand a recursive pattern.

**Question :** Program to calculate 2<sup>n</sup> , n starts from 1

**Logic :** 2<sup>4</sup> = 2 * 2<sup>3</sup> = 2 * 2 * 2<sup>2</sup> = 2 * 2 * 2 * 2 = 2 * 2 * 4 = 2 * 8 = 16

Therefore we can say that we can write :-  

F(n) = 2*F(n-1)              This is our recursive call

This question utilizes a "Linear recursive tree".

---

### Fibonacci Series

**Question :** Program to find n<sup>th</sup> term of a Fibonacci series

**Logic :** Fibonacci series is a series of numbers in which each number is the sum of the two preceding numbers

It goes as : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... 

*Formula :* F(n) = F(n-1) + F(n-2)   where F(0)=0 and F(1)=1 and "n" is non-negative

*Sample :* 

F(4) = F(3) + F(2)

F(3) = F(2) +F(1)

F(2) =F(1) +F(0)

since F(1) is 1 and F(0) is 0, so F(2) = 1 + 0 =1

F(3) = F(2) + F(1) = 1 + 1 = 2

F(4) = F(3) + F(2) = 2 +1 =3

Hence, This program uses a more "branched/non-linear recursive tree"
