import java.util.*;
class nfibonacci
 {

    static int fibo(int n)
    {
	    	if(n==0)      // base condition; 
			    return 0;

		    if(n==1)  
			    return 1;

      //small calculation
        int recResult1 = fibo(n-1);  
        int recResult2 = fibo(n-2);   
        int smallCal = recResult1+recResult2;  

        return smallCal;

    }

    // Driver Code
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);  // to take input we use scanner class.
        System.out.print("Enter a number : ");
        int n = in.nextInt();

        System.out.println("Fibonacci num of " + n + " is : " + fibo(n));
    }
}
