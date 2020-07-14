#include<iostream>
#include<math.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int ar[n];

  for(int i=0;i<n;i++){
     cin>>ar[i];
  }

  long long int ans = 1;

  for(int i=0;i<n;i++){
     ans= (ans*ar[i])%(int)(pow(10.0,9.0)+7);
  }

 cout<<ans<<endl;
 return 0;
 }

