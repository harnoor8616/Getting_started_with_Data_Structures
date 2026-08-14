#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nodes, edges, u, v;
    cin >> nodes >> edges;
    vector<int> adjlist[nodes];
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjlist[u].push_back(v);
    }
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adjlist[i].size(); j++)
        {
            cout << adjlist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}