def exp(n):
    if(n==0):
        return 1
    if(n%2==0):
        return exp(n//2)*exp(n//2)
    return exp(n//2)*exp(n//2)*2

print(exp(14))
