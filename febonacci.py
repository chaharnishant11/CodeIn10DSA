def febonacci(n,a=0,b=1):
    if(n==0):
        return 0
    print(a)
    temp=a+b
    a=b
    b=temp
    febonacci(n-1,a,b)

febonacci(5)
