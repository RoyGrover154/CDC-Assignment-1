#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;


class solution{
    private:
        void dfs(vector<vector<int>>& graph, vector<vector<int>>& result, vector<int>& temp, int u, int target){

                temp.push_back(u);

                if(u == target){
                    result.push_back(temp);
                    temp.pop_back();
                    return;
                }
                else{
                    for(int v : graph[u]){
                        // avoid revisiting nodes already in the current path to prevent cycles
                        if(find(temp.begin(), temp.end(), v) == temp.end()){
                            dfs(graph, result, temp, v, target);
                        }
                    }
                    temp.pop_back();
                }
        }
    
    public:
    
    vector<vector<int>> allPathSourceTarget(vector<vector<int>>&graph){
        int n = graph.size();

        vector<vector<int>>result;
        vector<int>temp;

        int source = 0;
         int target = n-1;

         dfs(graph, result, temp, source , target);

         return result;
    }
};

int main(){

    int V, E;

    cin >> V >> E;

    cout << "Enter the edge and vertices";

    vector<vector<int>>graph(V);
    
    for(int i=0; i<E; i++){
        int u ,v;
        cin >> u >> v;
        
    solution obj;

    vector<vector<int>> ans = obj.allPathSourceTarget(graph);

    for(const auto &path : ans){
        for(size_t i = 0; i < path.size(); ++i){
            cout << path[i];
            if(i + 1 < path.size()) cout << " ";
        }
        cout << "\n";
    }
    return 0;

}
 