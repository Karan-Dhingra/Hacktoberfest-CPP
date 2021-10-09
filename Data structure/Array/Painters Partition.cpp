/*Tony wants to paint his dog's home that has n boards with different lengths. 
The length of ith board is given by arr[i] where arr[] is an array of n integers. 
He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board. 

The problem is to find the minimum time to get this job done if all painters start 
together with the constraint that any painter will only paint continuous boards,
say boards numbered {2,3,4} or only board {1} or nothing but not boards {2,4,5}.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canWe(int arr[], int n, int k, long long sep)
    {
        long long painters = 1;
        long long time_taken = 0;
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] + time_taken > sep)
            {
                painters++;

                time_taken = arr[i];
                if (painters > k)
                    return 0;
            }
            else
                time_taken += arr[i];
        }
        return 1;
    }
    long long minTime(int arr[], int n, int k)
    {
        long long sum = 0;
        long long start = 0;
        for (long long i = 0; i < n; i++)
        {
            sum += arr[i];
            if (start < arr[i])
                start = arr[i];
        }
        long long s = start;
        long long e = sum;
        long long ans = INT_MAX;
        while (s <= e)
        {
            long long mid = (s + e) / 2;
            if (canWe(arr, n, k, mid))
            {
                ans = min(ans, mid);
                e = mid - 1;
            }
            else
                s = mid + 1;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minTime(arr, n, k) << endl;
    }
    return 0;
}