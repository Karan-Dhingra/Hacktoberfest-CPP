#include<bits/stdc++.h>
#include<numeric>
#include<math.h>
using namespace std;
int main()
{
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vector<bool> vis(n+1, 0);
    for(int i=0; i<m; i++){
        cout<<"Enter for "<<i+1<<" value: ";
        int u, v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cout<<endl;
    }
    // cout<<"Insertion Completed \n";
    // for(int i=1; i<n+1; i++){
    //     cout<<i<<"->";
    //     for(int i: adj[i]){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    queue<int> q;
    q.push(1); vis[1] = 1;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        for(int i: adj[node]){
            if(vis[i] == 0){
                vis[i] = 1;
                q.push(i);
            }
        }
    }

    return 0;
}