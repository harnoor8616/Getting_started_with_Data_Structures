#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int u , v , nodes,edges,w;
    cout<<"enter number of vertices: "<<endl;
    cin>>nodes;
    cout<<"enter number of edges: "<<endl;
    cin>>edges;
    
    vector<vector<int>> adjmat(nodes,vector<int>(nodes,0));
    for(int i=0;i<edges;i++)
    {
        cout<<"enter the "<<i+1<<"vertex :";
        cin>>u>>v;
        cout<<"enter weight of edge: "<<endl;
        cin>>edges;
        cout<<endl;
        adjmat[u][v]=1;
    }
    for(int i=0;i<edges;i++)
    {
        for(int j=0;j<edges;j++)
        {
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}