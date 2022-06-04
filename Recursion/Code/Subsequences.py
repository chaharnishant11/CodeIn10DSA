# Recursion
# Program to find all possible subsequences of a given string/sequence

def sequence(s,temp,index):
    if (len(s)==index):
        print(temp,end=" ")
        return
    
    # take
    sequence(s, temp+s[index], index+1)

    # not take
    sequence(s, temp, index+1)


S=input("Enter a string : ")
sequence(S, "", 0)
print()