### **Loops**
---

**Definition :** It is a set of instructions that is executed continuously until a certain condition is reached. In other words, it works as long as the condition provided to it continues to be true.

these are used to reduce the code required for completing actions that are required to be performed continuously n number of times, such as printing "hello" 100 times can be done in 4 to 5 lines with loops otherwise it would have taken 100 lines

**3 Types of loops in C++**
1. For loop (mostly used for fixed number of iterations)
2. While loop (mostly used if number of iterations is not known beforehand)
3. Do-while loop (used for same reason as while, but it being an exit controlled loop it executes at least once no matter whether the condition is true or false. It will execute one time at least)

**For Syntax**
`for(initialize;condition;increment/decrement){`
`---------------tasks to do--------------------`
`}                                             `

**While Syntax**
`while(condition){  `
`----tasks to do----`
`increment/decrement`
`}                  `

**Do-while Syntax**
`do{                `
`----tasks to do----`
`increment/decrement`
`} while(Condition);`

**Note :**
1. while and do while don't initialize a variable so we must have a variable initialized beforehand to use these
2. Variables have scopes so a variable that is defined inside a function can be used by that function only, like the variable initialized by for inside a bracket will only be used inside the for loop and not outside