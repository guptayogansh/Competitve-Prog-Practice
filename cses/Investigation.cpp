#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mxN = 1e5, M=1e9+7;
int n,m, p[mxN],dp[mxN];
vector<int> adj[mxN],ans;
bool vis[mxN],act[mxN];
ll d[mxN];
vector<pair<ll,ll>> adj2[mxN];

void dfs(int u){
  dp[u]= u==n-1?1:0;
  vis[u] = 1;
  act[u] = 1;
  for(auto nd:adj[u]){
  	if(act[nd]){
  	    cout<<"IMPOSSIBLE";
  		exit(0);
	  }
	else{
		if(!vis[nd]){
			p[nd]=u;
			dfs(nd);
		}
	}
	dp[u]=(dp[u]+dp[nd])%M;
 }
 act[u]=0;
}



void dfs2(int u){
  dp[u]= u==n-1?1:1e9; 
  vis[u] = 1;
  act[u] = 1;
  for(auto nd:adj[u]){
  	if(act[nd]){
  	    cout<<"IMPOSSIBLE";
  		exit(0);
	  }
	else{
		if(!vis[nd]){
			p[nd]=u;
			dfs2(nd);
		}
	}
	if(dp[nd]+1<dp[u])
	 p[u]=nd,dp[u]=dp[nd]+1;
 }
 act[u]=0;
}


void dfs3(int u){
  dp[u]= u==n-1?1:-1e9;
  vis[u] = 1;
  act[u] = 1;
  for(auto nd:adj[u]){
  	if(act[nd]){
  	    cout<<"IMPOSSIBLE";
  		exit(0);
	  }
	else{
		if(!vis[nd]){
			p[nd]=u;
			dfs3(nd);
		}
	}
	
	if(dp[nd]+1>dp[u])
	 p[u]=nd,dp[u]=dp[nd]+1;
}
 act[u]=0;
}


int main(){
	 cin>>n>>m;
  while(m--){
  	ll a,b,c;
  	cin>>a>>b>>c,--a,--b;
  	adj2[a].push_back({c,b});
  	
  }
  
  memset(d,0x3f,sizeof(d));
  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
  
  d[0]=0;
  q.push({0,0});
  while(!q.empty()){
  	pair<ll,ll> p = q.top();
  	q.pop();
  	
  	if(p.first>d[p.second])
  	 continue;
  	
  	for(auto nd:adj2[p.second]){
  		ll w=nd.first, v=nd.second;
  		if(d[p.second]+w<d[v])
  		{
  			d[v]=d[p.second]+w;
  			q.push({d[v],v});
		  }
	  }
  }

   for(int i=0;i<n;i++)
    for(auto nd:adj2[i]){
    	ll w=nd.first, v=nd.second;
    	if(d[i]+w==d[v])
    	 adj[i].push_back(v);
	}
	  
  for(int i=0;i<n;i++)
     if(!vis[i])
      dfs(i);
      
  cout<<d[n-1]<<" "<<dp[0];
  
  memset(vis,0,n);
  
  for(int i=0;i<n;i++)
     if(!vis[i])
      dfs2(i);
  cout<<" "<<dp[0]-1;
  
  memset(vis,0,n);
  
  for(int i=0;i<n;i++)
     if(!vis[i])
      dfs3(i);
  cout<<" "<<dp[0]-1;    
   
}
