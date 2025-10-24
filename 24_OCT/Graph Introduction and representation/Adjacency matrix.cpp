#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class solution{
    public:
   vector<vector<int>> printgraph(int V, vector<pair<int,int>>&edges){
    
    vector<vector<int>>adj(V);

    for(const pair<int,int> edge : edges){
        int u = edge.first;
        int v = edge.second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
        return adj;
  }
};

int main(){
    int V,E;
    cin >> V >> E;

    vector<pair<int,int>>edges;

    cout << "Enter edges \n";

    for(int i=0; i<E; i++){
        int u,v;
        cin >> u >> v;
        edges.push_back({u,v});
    }

    solution obj;

    vector<vector<int>>adjlist = obj.printgraph(V,edges);

    for(int i=0; i<V; i++){
        cout << i << "->";
        for(int j : adjlist[i]){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}