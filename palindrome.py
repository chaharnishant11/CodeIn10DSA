def if_pan_drome(str, n=0):
    if(n==len(str)):
        return 'yes'
    if(str[n]!=str[len(str)-n-1]):
        return 'no'
    return if_pan_drome(str, n+1)
print(if_pan_drome('tomato'))
print(if_pan_drome('coconut'))
print(if_pan_drome('abcba'))
