#include<iostream>
#include<vector>
#include<algorithm>
#include <queue>

using namespace std;

class solution{
    public:

    vector<int> bfs(vector<vector<int>> &adj){
        int n = adj.size();
       
        ////create visited array
        vector<int>visit(n,0);
        visit[0] = 1;

        /// create queue////
        queue<int>q;
        q.push(0);


        ///create array
        vector<int>bfs_of_graph;

        ///store node in queue and check its neighbour and then pop it
        while(!q.empty()){
            int node = q.front();
            q.pop();

            bfs_of_graph.push_back(node);

            ///repeat until all nodes are visited
            for(auto it : adj[node]){
                if(!visit[it]){
                    visit[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs_of_graph;
    }
};

int main(){
    int V, E;
    cout << "Enter number of vertices and edges";
    cin >> V >> E;

    vector<vector<int>>adj(V);

    cout << "Enter edges: \n";

    for(int i=0; i<E; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    solution obj;
    
    vector<int> result = obj.bfs(adj);

    for(int node : result){
        cout << node << " ";
    }
    cout << endl;

    return 0; 
}