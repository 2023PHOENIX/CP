#include<iostream>
#include<map>

using namespace std;


map<int,int> graph;
map<int,bool> visited;

int dfs(int node,int depth,int ter){
    if(visited[node]==1){
        return -1;
    }
    else if(node==ter){
        return depth;
    }
    visited[node] = true;
    return dfs(graph[node],depth+1,ter);
}
int main(){
    int n,s,t;  cin>>n>>s>>t;

    for(int i=1;i<=n;i++){
        int x;  cin>>x;
        graph[i] = x;
    }

    cout<<dfs(s,0,t);
    return 0;


}