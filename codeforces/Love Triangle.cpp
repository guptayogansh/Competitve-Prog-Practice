#include <bits/stdc++.h>
using namespace std;

const int mxN = 5000;

int p[mxN],n;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>p[i], --p[i];
	
	for(int i=0;i<n;i++){
		if(p[p[p[i]]]==i){
		cout<<"YES";
		exit(0);	
		}
	}
	cout<<"NO";
}
