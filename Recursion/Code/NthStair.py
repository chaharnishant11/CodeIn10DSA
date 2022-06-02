#Program to find the number of ways to reach the nth stair

def countWays(n):
    if (n==1 or n==2): #Base Case
        return n
    else:
        return countWays(n-1) + countWays(n-2) # using countWays(n-1) and countWays(n-2) are "RECURSIVE CALLS"
        # adding the two together is the "SMALL CALCULATION"

N = int(input("Enter a positive number : "))
print("Number of ways to reach "+str(N)+"th Stair are = ",countWays(N))