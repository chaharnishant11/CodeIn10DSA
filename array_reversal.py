def arr_rev(arr, n=0):
    if(n==len(arr)//2):
        return
    temp=arr[n]
    arr[n]=arr[len(arr)-n-1]  
    arr[len(arr)-n-1]=temp
    arr_rev(arr, n+1)
    return(arr)
    
array=[1,2,3,4,5,6,7]
print(array)
print(arr_rev(array))
