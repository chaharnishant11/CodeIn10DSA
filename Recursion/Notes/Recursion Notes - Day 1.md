# Recursion
- A function calling itself is called recursion
- In recursion we break bigger problem into smaller problem, and use recursion to solve those smaller problems and finally get a desired output, This is known as 'Recursion Leap of Faith'

---

[Question_1] : Sum of first n natural numbers using recursion

[Logic] : sum of first n numbers = n + sum of (n-1) numbers, sum of first (n-1) numbers = (n-1) + sum of (n-2) numbers and so on, in this case the base condition should be for n = 1

[Flow_Example] : 
    sumN(4)=4 + sumN(3) = 4 + 3 + sumN(2) = 4 + 3 + 2 + sumN(1) = 4 + 3 + 2 + 1 = 10

Note : Every recursion has a Base Case which prevents it from continuing indefinitely

## 3 Parts of Recursion
1. Base Case
2. Small Calculation
3. Recursive formula 

small calculation and recursive formula are interchangeable and one can come before the other

- Most important part is Recursive Call and then at 2nd comes the Base case

---

[Question_2] : Find Factorial of number n

[Logic] : factorial of number n = n * factorial of number (n-1), factorial of number (n-1) = (n-1) * factorial of number (n-2) and so on, in this case the base condition should be for n = 1 and n = 0, factorial of both is 1

[Flow_Example] : 
    factorial(4)=4 * factorial(3) = 4 * 3 * factorial(2) = 4 * 3 * 2 * factorial(1) = 4 * 3 * 2 * 1 = 24
