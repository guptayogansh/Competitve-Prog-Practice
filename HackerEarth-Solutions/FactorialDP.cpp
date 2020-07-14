#include <bits/stdc++.h>
#define M 1000000007;
using namespace std;


 long int fact[100005]={};
 long int factorial( long int n){
	if(n == 0 || n == 1){
		fact[0] = 1;
		fact[1] = 1;
		return 1;
	}
	if(fact[n]!=0)
		return fact[n];
	fact[n] = (n*factorial(n-1))%M;
	return fact[n];
}

int main()
{
    long int t,n;
    cin>>t;
    while(t--){
    	cin>>n;
    	cout<<factorial(n)<<"\n";
    }
    return 0;
}

