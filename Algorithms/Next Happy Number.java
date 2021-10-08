// For a given non-negative integer N, find the next smallest Happy Number. A number is called happy if it leads to 1 after a sequence of steps wherein each step number is replaced by the sum of squares of its digit that is if we start with Happy Number and keep replacing it with digits square sum, we reach 1.
 
// Example 1:

// Input:
// N = 8
// Output: 10
// Explanation: Next happy number after 8 is 10 because 1*1 + 0*0 = 1




import java.io.*;
import java.util.*;

class Hacktober
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.nextHappy(N));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution{

    static boolean  hp(int n)
    {
        if(n==1 || n==7)
        return true;
        int sum=n;
        while (sum>9)
        {   sum=0;
            while(n!=0){
                int d=n%10;
                sum+=d*d;
                n=n/10;
            }
            if(sum==1)
            return true;
            n=sum;
        }
        if(sum==7)
        return true;
        return false;
    }
    static int nextHappy(int N){
        // code here
        int i=N+1;
        while(true){
            if(hp(i))
            return i;
            i++;
        }
    }
}
