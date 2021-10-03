#include "iostream"
using namespace std ;

// return index of search item in sorted array returns -1 if not present
int binarySearch(int arr[],int n,int target ){
	int start = 0 ;
	int end = n-1 ;
	int mid ;
	while(start < end ){
		mid = (start + end) / 2 ;
		if(arr[mid] == target){ return mid; }
		else if(arr[mid] < target){ start = mid + 1 ; }
		else { end = mid - 1 ; }
	}
	return -1 ;
}


int main(){
	int arr[] = {1,45,67,90} ; 
	int n = sizeof(arr)/4 ;
	cout<<binarySearch(arr,n,67) ;
	return 0 ; 
}
