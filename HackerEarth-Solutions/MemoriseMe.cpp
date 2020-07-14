#include<bits/stdc++.h>
using namespace std;

int main(){

 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,q,b;

 cin>>n;
 int ar[n];
 unordered_map<int,int> mp;
 for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
    }
 cin>>q;

 while(q--){
   cin>>b;
    if(mp[b] == 0)
        cout<<"NOT PRESENT"<<"\n";
    else
        cout<<mp[b]<<"\n";
 }

 return 0;
}
