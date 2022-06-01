#Program to find nth number in a Fibonacci series

def fibonacci(n):
    if n==0:        # Base Case 1
        return 0
    elif n==1:      # Base Case 2
        return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2) # fibonacci(n-1) and fibonacci(n-2) are recursive calls
        # addition of the two is our small calculation


n=int(input("Enter a non-negative number : "))
print("nth Fibonacci number is : ",fibonacci(n))