#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int left, int right, int item){
    
    if (right >= left){
        
       
        int mid = left + (right - left)/2;

        
        if (array[mid] == item)
            return mid+1;
        
       
        if (array[mid] > item)
            return binarySearch(array, left, mid-1, item);
    
        
        else
            return binarySearch(array, mid+1, right, item);
    }
    
    else
       return -1;
}
int main(){
 
    int array[10];
    int item ;
    cout<<"ENTER 10 ELEMENTS\n";
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    cout<<"ENTER THE ITEM TO BE FOUND\n";
    cin>>item;
   
    int position = binarySearch(array, 0, 10, item);

    if(position == -1)
        cout<<"Not Found";
    else
        cout<<"We found the item "<< item <<" at position "<< position;
}
