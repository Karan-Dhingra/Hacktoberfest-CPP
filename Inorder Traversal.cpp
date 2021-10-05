#include <iostream>

using namespace std;

int main()
{
   string a;
   cin>>a;
   for(int i=0;i<3;i++)
   { if(a.at(i)=='1')
       a.at(i)='9';
       else
       a.at(i)='1';}
       cout<<a;
    return 0;
}
