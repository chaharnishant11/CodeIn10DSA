### Permutations

It refers to **the number of ways** we can **arrange something**

Example: if we have 3 elements [1,2,3] then we have 3 possibilities for 1st place, 2 for 2nd place and 1 possibility for last place.

Formula : n!/(n!-r!)  but here since all objects are selected at all times, therefore 

formula = n! only



here we will be using **count array**, this might require a bit more space since we are using an extra array but its a fairly simple approach


A more optimized approach will be to find all possible swaps of the final array

we will do this by swapping the elements on the right of current index
