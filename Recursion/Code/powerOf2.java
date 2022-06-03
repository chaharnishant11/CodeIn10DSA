import java.util.*;
class power
 {

    static int power(int n)
    {
		if(n==1)  // base condition;
		return 2;

		int recResult = power(n-1);
		int smallCal = 2*recResult;  

		return smallCal;
    }

    // Driver Code
    public static void main(String args[])
    {
		Scanner in = new Scanner(System.in);
		System.out.print("Enter a positive number : ");
		int n = in.nextInt();

        System.out.println("Factorial of " + n + " is " + power(n));
    }
}
