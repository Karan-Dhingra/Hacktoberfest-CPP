#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    if(n%2==0){
        for(int i=0 ; i<n/2 ; i++){
            int temp = arr[i];
            arr[i] = arr[n-1-i];
            arr[n-1-i] = temp;
        }
    }
    else{
        for(int i=0 ; i<n/2 ; i++){
            int temp = arr[i];
            arr[i] = arr[n-1-i];
            arr[n-1-i] = temp;
        }
    }

    cout<<"The reversed array is "<<endl;

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
