#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mxN = 1e5;
int m,n;
vector<pair<int,int>> adj[mxN+1];

ll d[mxN+1];

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	while(m--){
		int a,b,c;
		cin>>a>>b>>c;
		adj[a].push_back({b,c});
	}
	
	priority_queue<pair<ll,ll>>q;
	
	memset(d,0x3f,sizeof(d));
    
    d[1] = 0;
    
    q.push({0,1});
    while(!q.empty()){
    	int n = q.top().second;
    	q.pop();
    	
    	for(auto nd:adj[n]){
    		ll v = nd.first;
    		ll w = nd.second;
    		if(d[n]+w<d[v])
    		{
    			d[v] = d[n]+w;
    			q.push({-d[v],v});
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	 cout<< d[i]<<" ";
	
}
