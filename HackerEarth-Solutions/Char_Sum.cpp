#include<bits/stdc++.h>
using namespace std;

int main(){

 string str;
 int val,weight=0,sum =0;
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

  cin>>str;

  for(int i=0;i<str.length();i++){
    val = str[i];
    weight =val-96;
    sum = sum+weight;
  }

  cout<<sum;
 return 0;
}
