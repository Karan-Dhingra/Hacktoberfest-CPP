//Given a binary string S consisting of 0s and 1s. The task is to find the maximum difference of the number of 0s and the number of 1s (number of 0s – number of 1s) in the substrings of a string.

//Note: In the case of all 1s, the answer will be -1.

//Example 1:

// Input : S = "11000010001" 
// Output : 6 
// Explanatio: From index 2 to index 9, there are 7 0s and 1 1s, so number of 0s - number of 1s is 6.




import java.io.*;
import java.util.*;

class Hacktober {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            
            String s = read.readLine();
            Solution ob = new Solution();
            System.out.println(ob.maxSubstring(s));
        }
    }
}

class Solution {
    int maxSubstring(String S) {
        // code here
        int i,sum=0,mx=-3,n=S.length();
        char[] a=S.toCharArray();
        for(char c:a){
            int ch=c-'0';
            //System.out.println(ch);
            if(ch==0)
            sum+=1;
            else
            sum-=1;
            if(sum>mx)
            mx=sum;
            if(sum<0)
            sum=0;
        }
        return(mx);
    }
}
