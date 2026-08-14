#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // weighted undirected
    int nodes , edges,w;
    cin>>nodes>>edges;

    vector<vector<int>> adjmat (nodes,vector<int>(nodes,0));
    int u,v;
    for(int i=0;i<=edges-1;i++)
    {
        cin>>u>>v>>w;
        adjmat[u][v]=w;
        adjmat[v][u]=w;
    }
    for (int i = 0; i <=edges-1; i++)
    {
        for (int j = 0; i <= edges - 1;j++)
        {
            cout << adjmat[i][j];
        }
        cout << endl;
    }
    
}