#include<bits/stdc++.h>
#define ll long long 
using namespace std;

const int mxN=1e5;
int n,m,k;
vector<pair<ll,ll>> adj[mxN];
vector<ll> d[mxN];

int main(){
 
  cin>>n>>m>>k;
  while(m--){
  	ll a,b,c;
  	cin>>a>>b>>c,--a,--b;
  	adj[a].push_back({c,b});
  }	
	
   priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
   q.push({0,0});
   while(!q.empty()){
   	pair<ll,ll> p = q.top();
   	q.pop();
   	
   	if(d[p.second].size()>=k) continue;
   	
   	d[p.second].push_back(p.first);
   	
   	for(auto nd:adj[p.second]){
   	   
   	   ll w = nd.first, v=nd.second;
   	   q.push({p.first+w,v});
		
    }
   }
    
    for(int i=0;i<k;i++)
     cout<<d[n-1][i]<<" ";
   
}
