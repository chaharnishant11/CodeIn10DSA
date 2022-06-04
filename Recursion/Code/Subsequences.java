// Recursion
// Program to find all possible subsequences of a given string/sequence

import java.util.*;  

class HelloWorld {
    public static void sequence(String s, String temp, int index){

    if (s.length()==index){              //Base Case
       System.out.print(temp+" ");
        return;
    }

    // take
    String X = temp.concat(String.valueOf(s.charAt(index)));
    sequence(s,X,index+1);

    // not take
    sequence(s,temp,index+1);
    
    }
public static void main(String[] args) {
        Scanner sc= new Scanner(System.in); 
        System.out.print("Enter a string: ");  
        String S = sc.nextLine();
        sequence(S,"",0);
    }
}
