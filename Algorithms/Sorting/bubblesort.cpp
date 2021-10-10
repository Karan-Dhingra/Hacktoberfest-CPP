#include<iostream>
using namespace std;
int main()
{
	int n[5]= {8, 3, 11, 5, 2};
	int i, j, t;
	for (i=0; i<5; i++)
{
	for (j=0; j<4-i; j++)
{
	if (n[j]>n[j+1])
{
	t=n[j];
	n[j]=n[j+1];
	n[j+1]=t;
}
}
}
	for (i=0; i<5; i++)
	cout<<n[i]<<" ";
}
