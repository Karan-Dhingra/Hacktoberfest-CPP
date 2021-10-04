/*Given an array nums of n positive integers. 
The task is to find the longest Zig-Zag subsequence problem such that all elements of this are alternating
 (numsi-1 < numsi > numsi+1 or numsi-1 > numsi < numsi+1).*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ZigZagMaxLength(vector<int> &nums)
    {
        // Code here
        int len = 1;
        int n = nums.size();

        int prev = 0;
        for (int i = 1; i < n; i++)
        {
            int y = nums[i] - nums[i - 1];
            int curr;
            if (y < 0)
                curr = -1;
            else if (y > 0)
                curr = 1;
            else
                curr = 0;
            if (prev != curr && curr != 0)
            {
                len++;
                prev = curr;
            }
        }
        return len;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution obj;
        int ans = obj.ZigZagMaxLength(nums);
        cout << ans << "\n";
    }
    return 0;
}