#include<iostream>
using namespace std;
int temp;
int part(int ar[],int l,int h)
{
	int pivot=ar[h];
	int i=l-1;
	for(int j=l;j<=h-1;j++)
	{
		if(ar[j]<pivot)
		{
			i++;
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
			
		}
	}
	temp=ar[i+1];
	ar[i+1]=ar[h];
	ar[h]=temp;
	return(i+1);

}

void quicksort(int ar[],int l,int h)
{
	if(l<h)
	{
		int pi=part(ar,l,h);
		quicksort(ar,l,pi-1);
		quicksort(ar,pi+1,h);
	}
}
int main()
{
	int ar[]={4,5,1,3,2};
	int size = sizeof(ar)/sizeof(int);
	cout<<"Initial array:\n";
	for (int i=0; i<size; i++)
	cout<<ar[i]<<" ";
	cout<<endl;
	quicksort(ar,0,4);
	cout<<"Sorted array:\n";
	for(int k=0;k<5;k++)
	cout<<ar[k]<<" ";
	return 0;
}
