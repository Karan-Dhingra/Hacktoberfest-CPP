//Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n ;i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for(int i=0; i<n ;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    int a[max+1];
    for(int i=0; i<=max ;i++)
    {
        a[i] = 0;
    }
    for(int i=0; i<n ;i++)
    {
        for(int j=0; j<= max; j++)
        {
            if(j == arr[i])
            {
                a[j] = a[j]+1;
            }
        }
    }
    int max1 = a[0];
    for(int j=1; j<= max; j++)
        {
            if(max1 < a[j])
            {
                max1 = a[j];
            }
        }
    for(int j=0; j<= max; j++)
        {
            if(max1 == a[j])
            {
                cout << j;
                break;
            }
        } 
}
