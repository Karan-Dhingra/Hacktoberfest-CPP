#include<bits/stdc++.h>
#include<numeric>
#include<math.h>
using namespace std;
const int INF = 1e9;
const int N = 1e7+3;
vector<int> coins;

void CoinChange(int amt){
    int n = coins.size();
    int dp[n+1][amt+1];

    for(int i = 0; i <=n; i++){
        for(int j = 0; j<=amt; j++){
            if(j == 0)
                dp[i][j] = 0;
            else if(i == 0)
                dp[i][j] = INF;
            else if(coins[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else 
                dp[i][j] = min(1+dp[i][j-coins[i- 1]], dp[i-1][j]);
        }
    }
    int ans = dp[n][amt] > INF ? -1 : dp[n][amt];
    cout << ans << endl;
}

int main()
{
    int n, t; cin>>n;
    for(int i=0; i<n; i++){
        cin>>t;
        coins.push_back(t);
    }
    int amt; cin>>amt;
    CoinChange(amt);
    return 0;
}