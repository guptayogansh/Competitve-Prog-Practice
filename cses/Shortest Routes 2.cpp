#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mxN = 500;
int n,m,q;
ll d[mxN][mxN];

int main(){
	
	
	cin>>n>>m>>q;
	memset(d,0x3f,sizeof(d));
	while(m--){
		ll a,b,c;
		cin>>a>>b>>c,--a,--b;
		d[a][b] = min(c, d[a][b]);
		d[b][a] = min(c, d[b][a]);
     }
     
     	for(int i=0;i<n;i++) d[i][i] = 0;

		for(int k=0;k<n;k++)
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
				 d[i][j] = min(d[i][j], d[i][k]+d[k][j]);

		while(q--){
			int a,b;
			cin>>a>>b,--a,--b;
			cout<< (d[a][b]>=1e18?-1:d[a][b])<<"\n";
		}
	}
	



