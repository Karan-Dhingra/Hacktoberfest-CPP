#include <iostream>

using namespace std;

//SORTING ALGORITHM
// 5 2 7 6 1

// 2 5 7 6 1
// 2 5 7 6 1
// 2 5 6 7 1
// 1 2 5 6 7

void insertionSort(int n,int arr[]){//takes 53ms

    for (int i = 1; i < n; i++)
    {
        int current = arr[i]; 
        int j = i-1;
        while (arr[j] > current && j>=0) 
        {
            arr[j+1]=arr[j];
            j--;
        }
        current=arr[j+1];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl; 

}

void selectionSort(int n, int arr[]){//takes 54ms
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }   
        }   
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}


void bubbleSort(int n,int arr[]){ //takes 53ms

    int counter=1;
    while (counter < n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
            
        }
        counter++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl; 
    
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionSort(n,arr);

    return 0;
}