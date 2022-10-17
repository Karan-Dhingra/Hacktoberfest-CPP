#include<iostream>
using namespace std;
int main(){
    int array[5]; //initializing an array say of size 5
    
    cout<<"ENTER ANY 5 ELEMENTS IN ARRAY\n";
    //using for loop for taking inputs in array
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    cout<<"ELEMTS OF YOUR ARRAY \n";
    //USING FOR LOOP FOR PRINTING ARRAY ELEMENTS
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    int pos;
    cout<<"\nENTER ANY ONE POSITION BETWEEN 1 & 5 TO BE DELETE\n";
    cin>>pos;
    pos--; //actual indexing starts from 0 so position will be less than ONE
    
    //using foor loop to delete the element
    for(int i=pos;i<4;i++){
        array[i]=array[i+1];
    }
    cout<<"ARRAY AFTER DELETION\n";
    for(int i=0;i<4;i++){
        cout<<array[i]<<" ";
    }
}
