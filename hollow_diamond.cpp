#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n;j++)
        {
           if(i+j>n&&i+j==n+1)
           cout<<"* ";
           else
           cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            if(i==j)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
           if(i<j&&j-i==1)
           cout<<"* ";
           else
           cout<<"  ";
        }
        for(j=1;j<n;j++)
        {
            if(i+j==n)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}