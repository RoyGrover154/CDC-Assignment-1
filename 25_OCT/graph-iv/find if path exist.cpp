#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;


class solution{
    public:

    bool validpath(int n, vector<vector<int>>edges, int start, int end){

        vector<vector<int>>graph(n);

        for(int i=0; i< edges.size(); i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }

        queue<int>q;
        vector<int>visited(n,0);

        q.push(start);
        visited[start] =1;

        while(!q.empty()){
            int top = q.front();
            q.pop();
            
            if(top == end){
                return true;
            }

            for(int i=0; i<graph[top].size(); i++){
                if(visited[graph[top][i]] == 0){
                    q.push(graph[top][i]);
                    visited[graph[top][i]] = 1;
                }
            }
        }
        return false;
    }
};


int main(){
    int V,E;

    cout << "Enter the vertices and edges";

    cin >> V >>E;

    vector<vector<int>>edges;

    for(int i=0; i<E; i++){
        int u, v;
        cin >>  u >>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    int source, destination;
    cout << "enter source and destination";
    cin >> source >> destination;

    solution obj;

    bool result = obj.validpath(V, edges, source, destination);

    cout << result;

    return 0;

}