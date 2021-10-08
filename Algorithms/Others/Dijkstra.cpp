#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define ll long long int
#define inf 3e18 + 1
#define all(v) (v).begin(), (v).end()
#define N 200005
#define F first
#define S second
using namespace std;
ll mod = 1e9 + 7;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
//freopen("error.txt","w",stderr);
#endif
  ll test = 1; 
  //cin>>test;
  while (test--)
  {
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>adj[n];
    for(int i=0;i<m;i++) {
      ll u,v,w;
      cin>>u>>v>>w;
      adj[u].push_back({v,w});
      adj[v].push_back({u,w});
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > pq;
    vector<ll>p(n,-1),vis(n,0),dis(n,inf);
    ll s=0;
    dis[s]=0;
    vis[s]=1;
    pair<ll,ll>x;
    pq.push({dis[s],s});
    while(!pq.empty()) {
      x=pq.top();
      pq.pop();
      vis[x.S]=1;
      for(auto i:adj[x.S]) { 
        if(!vis[i.F] and dis[i.F]>i.S+x.F) { 
          dis[i.F]=i.S+x.F;
          pq.push({dis[i.F],i.F});
          p[i.F]=x.S;
        }
      }
    }
    for(int i=0;i<n;i++) { 
      if(vis[i]) {
        cout<<i<<" "<<dis[i]<<endl; 
      }
    }

  }

  
  return 0;
}
