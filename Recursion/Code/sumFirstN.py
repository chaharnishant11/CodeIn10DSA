# Recursion
# Sum of first n natural numbers

def sumN(n):

    if n==1: #Base Case
        return 1
        
    else:
        return n+sumN(n-1) # sumN(n-1) is recursive call
        # and n + sumN(n-1) is our small calculation

n=int(input("Enter a positive number n : "))

print("Sum of first n natural numbers = ",sumN(n))
