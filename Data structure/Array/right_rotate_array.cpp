#include<bits/stdc++.h>
using namespace std;
void reverse(int l,int r,vector<int>&a)
{
    while(l<=r)
    {
        swap(a[l],a[r]);
        l++;r--;
    }
}
void rotate(vector<int>&a,int k)
{
    int n=a.size();
    reverse(0,n-k-1,a);
    reverse(n-k,n-1,a);
    reverse(0,n-1,a);
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }    
    
    rotate(a,k);
    for( int i=0;i<n;i++)
    cout<<a[i]<<" ";
}