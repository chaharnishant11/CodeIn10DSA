import java.util.*;
class nfactorial
 {

    static int fact(int n)
    {
		if(n==0 || n==1)  // base condition;
		return 1;

		int recResult = fact(n-1);
		int smallCal = n*recResult;  

		return smallCal;


		//return (n == 1 || n == 0) ? 1 : n * fact(n - 1);  --One liner using ternary operator.
    }

    // Driver Code
    public static void main(String args[])
    {
		Scanner in = new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n = in.nextInt();

        System.out.println("Factorial of " + n + " is " + fact(n));
    }
}
