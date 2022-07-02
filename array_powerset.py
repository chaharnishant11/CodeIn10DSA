def powst(lii, lio=[], n=0):
    if(n==len(lii)):
        print(lio)
        return
    # not take
    powst(lii, lio, n+1)
    # take
    lio.append(lii[n])
    powst(lii, lio, n+1)
    lio.remove(lii[n])

lis_in=[1,2,3,4]
powst(lis_in)
