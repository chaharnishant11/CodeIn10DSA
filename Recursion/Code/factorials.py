# Recursion
# Factorial of number n

def factorial(N):

    if (N==0 or N==1): #Base Case
        return 1
        
    else:
        #return N*factorial(N-1) #one way - recursive call & small calculation in same statement
        #other way
        recResult = factorial(N-1)  # recursive call
        result = N * recResult      # small calculation
        return result


n = int(input("Enter a number whose factorial is needed : "))

print("Factorial of ",n," is = ",factorial(n))
