----

### Subset Sum Problem

**3 basic parts of recursion :**

1. Base Case

2. Recursive Call

3. Small Calculation

**Note :** In all questions involving Subsets and sequences we use inclusion/exclusion or take/not-take conditions if solved via recursion

**QUESTION :** Given an array of non-negative integers, and a value *sum*, determine if there is a subset of the given set with sum equal to given *sum*.

**LOGIC :** 

3 main things to take care of :

1. Array

2. Current Sum

3. Index

**NOTE :** To check whether or not even one condition is true, we use *<u>logical OR operation</u>*

this is because 

true Or true = true

true Or false = true

false Or true = true

false Or false = false

So even if one case is true we will always get true, just as required

Rest of the execution is logic is similar to Day 6's problem with the only difference being that instead of taking subsets, we are taking sum of those subsets and checking whether or not they are equal to the required sum.

----
