### Combination Sum Problem

**Question :** Find all possible combinations from a set of distinct numbers whose sum is equal to the target value

**Note :** The numbers can be used any number of times and in any order & the two outputs are different if at least one of the numbers is different

**Logic :** Keep on adding a particular index to the given current sum, until the current sum gets equal to or more than the target value. If it becomes equal to target we get an answer & if it gets more than 7 we just stop since going further is fruitless. And other than this we just keep on doing inclusion/exclusion as usual.

**Condition/Bounding Condition :** currentSum>target (this is the condition that separates recursion from backtracking and reduces the number of possibilities we need to check)

**Base Condition :** return back when the array ends

**Variables required :**
1. tempAns to store the possible elements (starts empty)
2. currentSum to store the current sum of tempAns (starts as 0)
3. index i to keep track of our position (starts as 0)