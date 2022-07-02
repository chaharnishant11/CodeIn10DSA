def strpst(str,tmp='', n=0):
    if(n==len(str)):
        print(tmp)
        return
    # not take
    strpst(str, tmp, n+1)
    # take
    strpst(str, tmp+str[n], n+1)
    return

strpst('gal')
