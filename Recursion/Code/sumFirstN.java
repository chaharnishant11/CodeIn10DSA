import java.util.*;
class nSum
 {

    static int sum(int n)
    {
		if(n==1)  // base condition;
		return 1;

		int recResult = sum(n-1);
		int smallCal = n+recResult;  

		return smallCal;


		//return (n == 1 ) ? 1 : n + sum(n - 1);  //--One liner using ternary operator.
    }

    // Driver Code
    public static void main(String args[])
    {
		Scanner in = new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n = in.nextInt();

        System.out.println("Sum of " + n + " is " + sum(n));
    }
}
