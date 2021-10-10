#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void input(int ar[],int n)
{ 
    cout<<"Enter array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
}
void insertion_sort(int ar[],int n)
{
	
   int key,j;
    for (int i = 1; i < n; i++) 
    {  
        key = ar[i];  
        j = i - 1;  
        while (j >= 0 && ar[j] > key) 
        {  
            ar[j + 1] = ar[j];  
            j = j - 1;  
        }  
        ar[j + 1] = key;  
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
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
	int ar[n];
	input(ar,n);
	cout<<"Original Array"<<endl;
	display(ar,n);
	insertion_sort(ar,n);
	cout<<"Sorted Array"<<endl;
	display(ar,n);
	return 0;
}
