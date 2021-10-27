
#include <bits/stdc++.h>
#define ll long long int
#define fast_io ios_base::sync_with_stdio(0);\
cin.tie(NULL);\
cout.tie(NULL)
#define mod 10000000007
#define max 1000000000
using namespace std;
 
 //find the word BAZINGA in the userinput string
bool isSubSequence(char str1[], char str2[], int m, int n)
{
    int j = 0; 
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
 
    return (j == m);
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str1[] = "BAZINGA";
         int p;
         cin>>p;
         char str2[p];
         cin>>str2;
         int m = strlen(str1);
         int n = strlen(str2);
         isSubSequence(str1, str2, m, n) ? cout << "YES\n"
                                    : cout << "NO\n";
    }                                
         return 0;
}