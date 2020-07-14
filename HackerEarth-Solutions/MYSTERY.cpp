#include<bits/stdc++.h>
using namespace std;

int main(){

unsigned long long int n ;

int count;
ios_base::sync_with_stdio(false);
cin.tie(NULL);

while(cin>>n)
{
    count = 0;

    while(n){
      n = n & (n-1);
      count++;
    }
  cout<<count<<"\n";
}


return 0;
}

