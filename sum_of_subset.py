def powst(lii, sum=0, n=0):
    if(n==len(lii)):
        print(sum)
        return
    # not take
    powst(lii, sum, n+1)
    # take
    powst(lii, sum+lii[n], n+1)

lis_in=[1,2,3,]
powst(lis_in)
