#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	ll n,num,nsum=0,msum=0;
	cin>>n;
    nsum = n*(n+1)/2;	
	
    for(int i=0;i<n-1;i++){
    	cin>>num;
    	msum+=num;
	}
	cout<<nsum-msum;
}
