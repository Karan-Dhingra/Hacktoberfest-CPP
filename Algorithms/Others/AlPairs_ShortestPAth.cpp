#include<bits/stdc++.h>
#include<numeric>
#include<math.h>
#define INF 999
using namespace std;

int min(int a, int b)
{
    return (a<b?a:b) ;
}

int main()
{
    int A[7][7] = {
        {0, 3, 6, INF, INF, INF, INF},
        {3, 0, 2, 1, INF, INF, INF},
        {6, 2, 0, 1, 4, 2, INF},
        {INF, 1, 1, 0, 2, INF, 4},
        {INF, INF, 4, 2, 0, 2, 1},
        {INF, INF, 2, INF, 2, 0, 1},
        {INF, INF, INF, 4, 1, 1, 0}};

    for(int k=0; k<7; k++)
    {
        for(int i=0; i< 7; i++)
        {
            for(int j=0; j< 7; j++)
            {
                if(A[i][k] == INF or A[j][k] == INF)
                    continue;
                A[i][j] = min(A[i][j], A[i][k]+A[j][k]);
                // cout<<A[i][j]<<" "<<A[i][k]<<" "<<A[j][k]<<endl;
            }
        }

        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 4; j++)
                cout << A[i][j] << " ";
            cout << endl;
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}