import java.util.*;
class nStair
 {

    static int countWays(int n)
    {
        if(n==1 || n==2)  // base condition;
        return n;

        int recResult1 = countWays(n-1);
        int recResult2 = countWays(n-2);

        int smallCal = recResult1+recResult2;  

        return smallCal;


		    //return (n == 1 || n == 2) ? n : countWays(n-1) + countWays(n-2);  //--One liner using ternary operator.
    }

    // Driver Code
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = in.nextInt();

        System.out.println("Number of ways to reach " + n + "th step is " + countWays(n));
    }
}
