#include<iostream>
using namespace std;  
int main ()  
{  
    int a[20],size,i,item,j,flag;
    cout<<"Enter size:";
    cin>>size;
    cout<<"Enter elements:";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Item which is to be searched\n";  
    cin>>item;
    for (j = 0; j< size; j++)  
    {
        if(a[j] == item)   
        {  
            flag = j+1;  
            break;  
        }   
        else   
        flag = 0;  
    }   
    if(flag != 0)  
    {  
        cout<<"Item found at location"<<" "<<flag;  
    }  
    else  
    {  
        cout<<"\nItem not found\n";   
    }  
    return 0;
}   