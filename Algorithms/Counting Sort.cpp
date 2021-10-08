#include <iostream>
using namespace std;
int find_max(int ar[],int n)
{
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    return max;
}
void input(int ar[],int n)
{
     for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
}
void display(int ar[],int n)
{
     for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int ar[n];
    int br[n];
    cout<<"Enter array elements:\n";
    input(ar,n);
    int k=find_max(ar,n);
    int count[k+1];
    for(int i=0;i<=k;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        ++count[ar[i]];
    }
    for(int i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1]; 
    }
    for(int i=n-1;i>=0;i--)
    {
        br[--count[ar[i]]]=ar[i];
        
    }
    cout<<"Array after implementing count sort:\n";
     display(br,n);
    return 0;
}

