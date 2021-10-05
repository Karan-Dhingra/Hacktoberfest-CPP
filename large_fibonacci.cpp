
#include <stdio.h>
#define ll long long int

void copyy(ll a[], ll b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

int main()
{
    ll t;
    scanf("%lld", &t);
    // test cases
    while (t--)
    {
        ll pre[80000] = {0}, next[80000] = {0}, ans[80000] = {0}; // pre==f(n-2)  next==f(n-1)  ans==f(n)
        ll n, pre_size = 1, next_size = 1, ans_size = 1;

        pre[0] = 0;
        next[0] = 1;

        ll carry = 0;
        ll i = 0;
        scanf("%lld", &n);

        if (n == 0)
        {
            printf("0\n");
            continue;
        }
        else if (n == 1)
        {
            printf("1\n");
            continue;
        }

        n--;
        while (n--)
        {
            for (i = 0; i < pre_size; i++)
            {
                ans[i] = (pre[i] + next[i] + carry) % 10;
                carry = (pre[i] + next[i] + carry) / 10;
            }

            ll j = next_size - pre_size;
            //if no. of digits in next is greatr than that of pre
            while (j)
            {
                ans[i] = (next[i] + carry) % 10;
                carry = (next[i] + carry) / 10;
                i++;
                j--;
            }

            if (carry != 0)
            {
                ans_size++;
                ans[i] = carry;
                carry = 0;
            }
            pre_size = next_size;
            next_size = ans_size;

            copyy(next, pre, pre_size);
            copyy(ans, next, next_size);
        }

        for (int i = ans_size - 1; i >= 0; i--)
        {
            printf("%lld", ans[i]);
        }
        printf("\n");

    }
    return 0;
}
