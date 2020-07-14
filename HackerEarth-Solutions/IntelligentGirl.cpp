#include<bits/stdc++.h>
using namespace std;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

string S;
int n;
cin>>S;
n = S.length();
int evens[n]={};

for(int i=0;i<n;i++){
    if(int(S[i])%2==0)
        evens[i]=1;
}

for(int i=0;i<n;i++){
    int sum =0;
     evens[i] = accumulate(evens+i,evens+n,sum);
    cout<<evens[i]<<" ";
}

return 0;
}
