#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the number you want to find : ";
    cin>>key;

    for(int i=0 ; i<n ; i++){
        if(arr[i] == key){
            cout<<"The position is "<<i+1<<endl;
            cout<<"The index is "<<i<<endl;
            return 0;
        }
    }
    return 0;
}
