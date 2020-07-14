#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5;
int n,m;
int p[mxN];
vector<int> adj[mxN],ans;
bool vis[mxN],act[mxN];

void dfs(int n){
	
  vis[n] = 1;
  act[n] = 1;
  for(auto nd:adj[n]){
  	if(act[nd]){
  	    cout<<"IMPOSSIBLE";
  		exit(0);
	  }
	else{
		if(!vis[nd]){
			p[nd]=n;
			dfs(nd);
		}
	}
  }
 act[n]=0;
 ans.push_back(n);
}

int main(){
	 cin>>n>>m;
  while(m--){
  	int a,b;
  	cin>>a>>b,--a,--b;
  	adj[a].push_back(b);
  	
  }
  for(int i=0;i<n;i++)
     if(!vis[i])
      dfs(i);
      
    reverse(ans.begin(),ans.end());
    
    for(auto it: ans)
     cout<< it+1<<" ";
}
