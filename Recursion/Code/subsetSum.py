# Recursion
# Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.

class Solution:
    def helper(self,a,s,temp,index):
    	# Base Cases
        if (index>=len(a)):
            return False
        if (s==temp):
            return True
        if (s<temp):
            return False
        
        # recursive calls
        recCall1 = self.helper(a,s,temp+a[index],index+1)
        recCall2 = self.helper(a,s,temp,index+1)
        
        # small calculation
        return (recCall1 or recCall2)
        
    def isSubsetSum (self, N, arr, sum):
        return self.helper(arr,sum,0,0)
    
        # code here 
        
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        arr = input().split()
        for itr in range(N):
            arr[itr] = int(arr[itr])
        sum = int(input())

        ob = Solution()
        if ob.isSubsetSum(N,arr,sum)==True:
            print(1)
        else :
            print(0)
            
        

# } Driver Code Ends
