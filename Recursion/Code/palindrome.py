def helper(S,start,end):
    if start>=end:
        return 1
    if (S[start]!=S[end]):
        return 0;
    return helper(S,start+1,end-1)

def isPalindrome(S):
    n=len(S)-1
    return helper(S,0,n)

s=input("Enter a String : ")
result=isPalindrome(s)

if result==1:
    print("String is palindrome")
else:
    print("String is NOT palindrome")