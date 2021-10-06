#include<iostream>
#include<math.h>
using namespace std;
double decimalToBinary(int dec)
{
    double bin=0;
    int a=0;
    while (dec>0)
    {
        bin = (dec % 2)* pow(10,a) + bin;
        dec = dec/2;
        a++;
    }    
    return bin;
}

int main()
{
    int n;
    long long int l;
    cout<<" Decimal : ";  
    cin>>n;    
    l = decimalToBinary(n);
    cout<<" Binary : "<<l;
    return 0;
}