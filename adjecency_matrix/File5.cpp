#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nodes, edges, u, v,w;
    cin >> nodes >> edges;
    vector<pair<int,int>> adjlist[nodes];
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >>w;
        adjlist[u].push_back(make_pair(v,w));
        adjlist[v].push_back(make_pair(u,w));

    }
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adjlist[i].size(); j++)
        {
            cout << adjlist[i][j].first<< " "<<adjlist[i][j].second;
        }
        cout << endl;
    }
    return 0;
}