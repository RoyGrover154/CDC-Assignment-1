#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class solution{
    private:
        void dfs_of_graph(int Node, vector<vector<int>>&adj, vector<int>&visit, vector<int>&ls){

            visit[Node] = 1;

            ls.push_back(Node);
            //traverse all its neighbour

            for(auto it : adj[Node]){
                if(!visit[Node]){
                    dfs_of_graph(it, adj ,visit, ls);
                }
            }
        }


    public:
    vector<int> dfs(vector<vector<int>>&adj){
        int V = adj.size();

        vector<int>visit(V,0);

        int start = 0;

        vector<int>ls;

        dfs_of_graph(start, adj, visit, ls);

        return ls;
    }   
};

int main(){
    int V,E;

    cout << "Enter the vertices and edges";

    cin >> V >> E;

    vector<vector<int>>adj;

     cout << "Edge /n";

    for(int i=0; i<E; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    solution obj;

    vector<int>result = obj.dfs(adj);


    for(int node : result){
        cout << node << " ";
    }

    cout << endl;
    return 0;
}