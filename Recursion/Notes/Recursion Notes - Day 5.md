### Subsequence

**sub sequence is a part of a sequence**

example : in string "ajk" -> we have sub-sequences "a","j","k","aj","jk","ajk" and null/nothing

These can be **Continuous or non-continuous**, which is unlike substring or sub arrays which are always "continuous"

example : in number 1,2,3,4,5,6    => 1,2,3,4 can be a subarray/subsequence

however, 1,2,3,5 is strictly a subsequence since it is not continuous

---

**QUESTION :** Find all possible subsequences of a string

**Note :** Power Set does not include "empty" string

**LOGIC :** 

2 main conditions :

- Take (a condition in which we are including a particular element is known as take)

- Not Take (condition where a particular element is not included is called not take)

Here we will be taking care of 3 main things :

- Given String

- current temporary answer

- current index, i

**Base condition :** string size is equal to index

**Helper Function :** When we need some extra parameters then we create a helper function similar to our primary function, to deal with extra values

---
