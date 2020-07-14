
#include<bits/stdc++.h>
using namespace std;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
long int n,k;

cin>>t;
while(t--)
{
    cin>>n>>k;
     int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    if(ar[0]==k || ar[0]>k)
        cout<<"0"<<"\n";
    else
        cout<<k-ar[0]<<"\n";
}

return 0;
}
