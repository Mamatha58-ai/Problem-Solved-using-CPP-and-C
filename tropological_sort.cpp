#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n , m ;
	cin >> n >> m ;
	vector<vector<int>>adj(n+1);
	vector<int>inDegree(n+1,0);
	queue<int>qu;
	for(int i = 1 ; i <=m ; i ++){
	    int u , v ;
	    cin >> u >> v;
	    adj[u].push_back(v);
	    inDegree[v] ++;
	}

	  for(int i = 1 ; i <= n ; i++){
	      if(inDegree[i] == 0){
	          qu.push(i);
	      }
	  }
	while(!qu.empty()){
	    int node = qu.front();
	    qu.pop();
	    cout << node << " ";
	    for(int neigh : adj[node]){
	        inDegree[neigh] --;
	        if(inDegree[neigh] == 0){
	            qu.push(neigh);
	        }
	    }
	   
	}
}

