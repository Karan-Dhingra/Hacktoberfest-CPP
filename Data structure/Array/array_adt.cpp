//program to perform insert update deletion etc on a array
#include<iostream>
using namespace std;

struct array{
    int a[20];
    int size;
    int length;
};

void display(array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }
    cout<<endl;
}

void append(array *arr,int x){
    if(arr->length < arr->size)
        arr->a[arr->length++] = x;
}

void insert(array *arr,int x,int index){
    if(index > arr->length) return;
    for(int i = arr->length;i>index;i--)
        arr->a[i] = arr->a[i-1];
    arr->a[index] = x;
    arr->length++;
}

int del(array *arr,int index){
    if(index>=0 && index<arr->length){
        int temp = arr->a[index];
        for(int i=index;i<arr->length;i++)
            arr->a[i] = arr->a[i+1];
        arr->length--;
        return temp;
    }
    return 0;
}

int linear_search(array arr,int x){
    for(int i=0;i<arr.length;i++){
        if(arr.a[i] == x)
            return i;
    }
    return -1;
}

int main(){
    array arr={{3,4,5,6,7},20,5};
    cout<<"Element found at index: "<<linear_search(arr,8);
    return 0;
}