
#include <iostream>
#include <bits/stdc++.h>
#define code_compile_sucessfully ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long int
using namespace std;

int main()
{
    code_compile_sucessfully;
    ll n;  //number upto which u  want to find the prime number
    cin >> n;
    vector<ll> is_prime;  //stores the prime number
    vector<ll> check_for_prime(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        if (check_for_prime[i] == 0)
        {
            is_prime.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
            {
                check_for_prime[j] = i;
            }
        }
    }

    for (auto &&i : is_prime)
    {
        cout<<i<<" ";
    }

    return 0;
}
