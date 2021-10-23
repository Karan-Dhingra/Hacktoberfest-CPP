#include <bits/stdc++.h>
#include <numeric>
#include <math.h>
using namespace std;

bool isCyclePresent(int src, vector<vector<int>> &adj, vector<bool> &vis, int parent){
    vis[src] = true;
    for(int i: adj[src]){
        if(i!=parent){
            if(vis[i])
                return true;
            else if (!vis[i] and isCyclePresent(i, adj, vis, src))
                return true;
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<bool> vis(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        cout << "Enter for " << i + 1 << " value: ";
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cout << endl;
    }

    bool isCycle = false;

    for(int i = 1; i< n+1; i++){
        if(!vis[i] and isCyclePresent(i, adj, vis, -1)){
            isCycle = true;
        }
    }

    if(isCycle)
        cout<<"Cycle is present"<<endl;
    else
        cout<<"Cycle is not present"<<endl;

    return 0;
}