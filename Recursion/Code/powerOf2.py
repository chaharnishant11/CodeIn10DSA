#Program to calculate 2 raised to the power n

def power(n):
    if n==1:                  # Base Case
        return 2
    else:
        return 2*power(n-1)   # multiplication with 2 is small calculation & power(n-1) is the recursive call

N=int(input("Enter a positive number : "))
print("2^",end='')
print(N," = ",power(N))