#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<climits>
using namespace std;

void dfs(int node , int parent ,  vector<int>&disc,  vector<int>&low, unordered_map<int,bool>&visit,
     unordered_map<int,list<int>>adj,vector<int>&AP,int&timer){
     
     visit[node] = true;
     disc[node] = low[node] = timer++;
     int child = 0;

     for(auto nbr : adj[node]){
        if(nbr == parent)
         continue;

        if(!visit[nbr]){
            dfs(nbr,node,disc,low,visit,adj,AP,timer);
            low[node] = min(low[node] , low[nbr]);

            //cheack for articulation points
            if(low[nbr]>= disc[node] && parent != -1){
                AP[node] = 1;
            }
            child++;
        }
        else {
            low[node] = min(low[node] , disc[nbr]);
        }
     }

     if(parent == -1 && child > 1){
         AP[node] = 1;
     }

}



int main () {

    int n = 5;
    int e = 5;
    vector<pair<int,int>>edges;
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));

    //adj list
    unordered_map<int,list<int>>adj;

    for(int i = 0 ; i<edges.size() ; i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int>disc(n,-1);
    vector<int>low(n,-1);
    unordered_map<int,bool>visit;
    vector<int>AP(n,0);

    //dfs

    for(int i = 0 ; i<n ; i++){
         if(!visit[i]){
            dfs(i,-1,disc,low,visit,adj,AP,timer);
         }
    }
  

   //print articulation points

   cout << "articulation points are as follows" <<endl;

   for(int i = 0 ; i<n ; i++){
      if(AP[i] != 0){
         cout << i << " ";
      }
   }cout << endl;

   return 0;



}