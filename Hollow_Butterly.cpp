#include<iostream>
using namespace  std;
int main()
{
    int i,j,n;
    cout<<"Enter an even no.\n";
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j||j==1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(j=i*2-1;j<=n-2;j++)
        cout<<"  ";
        for(j=1;j<=i;j++)
        {
            if(i==j||j==1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=n/2-i+1;j++)
        {
            if(j==1||i+j==n/2+1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(j=1;j<i*2-1;j++)
        cout<<"  ";
        for(j=i;j<=n/2;j++)
        {
            if(i==j||j==n/2)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}