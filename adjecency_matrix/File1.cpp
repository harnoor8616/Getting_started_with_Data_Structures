#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int nodes,edges;
    cout<<"Please enter the number of nodes: "<<endl;
    cin>>nodes;
    cout<<endl;
    cout<<"Please enter the number of edges: "<<endl;
    cin>>edges;

    vector<vector<bool>> adjmat (nodes,vector<bool>(nodes,0));
    int u,v;
    for(int i=1;i<=edges;i++)
    {
        cin>>u>>v;
        adjmat[u][v]=1;
        adjmat[v][u]=1;
    }
    for(int i=0;i<=nodes-1;i++)
    {
        for(int j=0;i<=nodes-1;j++)
        {
            cout<<adjmat[i][j];
        }
        cout<<endl;
    }

}