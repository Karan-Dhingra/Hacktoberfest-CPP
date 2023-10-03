/*Given an array of N elements containing only 0 and 1. Find the length of the largest subarray with an equal number of 0's and 1's.
Constraints:-
1 < = N < = 100000
Output
Print the max length of the subarray.

Sample input
4
0 1 0 1

Sample Output
4                   
*/


import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class LargestSubArray {

    public static void main (String[] args) {
		
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        {
                arr[i]=sc.nextInt();
        }

            int ans = max_length(arr,n);
            System.out.println(ans);
            
      }
      
      public static int max_length(int[] arr,int n)
      {
        Map<Integer, Integer> m = new HashMap<>();
            int mx = 0, cnt = 0;
            for(int i = 0;i < arr.length;i++)
             {
                cnt+=(arr[i] == 1)?1:-1;
                if(cnt == 0)
                    mx = Math.max(mx, i+1);    		
                if(m.containsKey(cnt)) 
                {
                    mx = Math.max(mx, i - m.get(cnt));
                } else 
                    m.put(cnt, i);
            }
            return mx;
      }
     
    }  
