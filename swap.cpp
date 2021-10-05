#include <iostream>
#include <bits/stdc++.h>
#define code_compile_sucessfully ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long int
using namespace std;

int main()
{
    code_compile_sucessfully;
    ll a, b;
    cin >> a >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b;

    return 0;
}
