#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    int ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                ans = nums[j];
                break;
            }   
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {3, 1, 3, 4, 2};
    cout<<findDuplicate(nums);
    return 0;
}