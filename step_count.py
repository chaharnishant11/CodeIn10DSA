def step(n, cnt=0):
    if (n==0):
        return cnt+1
    if(n>=1):
        cnt= step(n-1, cnt)
    if(n>=2):
        cnt= step(n-2, cnt)
    if(n>=3):
        cnt= step(n-3, cnt)
    return cnt
print(step(4))
