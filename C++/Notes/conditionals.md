# Conditional Statements

1. Conditional statements, also known as selection statements, are used to make decisions based on a given condition. 
2.If the condition evaluates to True, a set of statements is executed, otherwise another set of statements is executed.
3. **“if-else”** and **“switch”** both are selection statements.
4. However, there are some differences in their operations.

# if Statement : 

- The if statement selects and executes the statement(s) based on a given condition.
- If the condition evaluates to True then a given set of statement(s) is executed. 
- However, if the condition evaluates to False, then the given set of statements is skipped and the program control passes to the statement following the if statement.

# if-else Statement : 
- The if – else statement causes one of the two possible statement( s) to execute, depending upon the outcome of the condition.

**if-else Syntax :**
`if (Condition){    `
`----Thing to do----`
`} else {           `
`--Else what to do--`
`}                  `

# Nested if-else Statement : 
- A nested if-else statement contains one or more if-else statements.
- The if else can be nested in three different ways :-
1. **if–else** statement nested within the if part.
2. **if-else** statement is nested within the else part.
3. **if-else** statement is nested within both the if and the else parts.

# if-else-if ladder :
- Also known as the if-else-if staircase, has an if-else statement within the outermost else statement.
- The inner else statement can further have other if-else statements.

# Switch Statement :

- A switch statement can only work for quality of comparisons.
- No two case labels in the same switch can have identical values.
- If character constants are used in the switch statement, they are automatically converted to their equivalent ASCII codes.
- The switch statement is more efficient choice than if in a situation that supports the nature of the switch operation.

**Switch Syntax :**
`switch(expression){`
`case const1:       `
`---things to do----`
`   break;          `
`case const2:       `
`---things to do----`
`   break;          `
`default:           `
`   break;          `
`}                  `

# Key Differences Between if-else and switch

1. Expression inside **if statement** decide whether to execute the statements inside if block or under else block. On the other hand, expression inside **switch statement** decide which case to execute.

2. An **if-else statement** uses multiple statements for multiple choices. On other hand, **switch statement** uses single expression for multiple choices.

3. **If-esle statement** checks for equality as well as for logical expression. On the other hand, **switch** checks only for equality.

4. The **if statement** evaluates integer, character, pointer or floating-point type or Boolean type. On the other hand, **switch statement** evaluates only character or a integer data type.

5. The **if statement** is more flexible than **switch statement**, but the **switch statement** is more efficient than **if-else statement**.
