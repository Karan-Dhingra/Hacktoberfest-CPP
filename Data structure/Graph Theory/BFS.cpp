#include <bits/stdc++.h>
#include <numeric>
#include <math.h>
using namespace std;

class Graph
{
    // int v; //Vertices

    // list<int> *adj; //Adjacency List

public:
    map<int, int> visited; //
    map<int, list<int>> adj;

    Graph(int v);

    void addEdge(int v, int w);
};

Graph::Graph(int v)
{
    this->v = v;
    adj = new list<int>[v];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

int main()
{

    return 0;
}