#include<bits/stdc++.h>
using namespace std;

int main(){
 int toffees=0,track;
 long int d;
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 cin>>d;
 int long r[d],x[d];
 for(int i=0;i<d;i++){

    cin>>r[i]>>x[i];
    x[i] = 100*x[i];
    track =2*3.14285714286*r[i];
    if(track<=x[i])
        toffees++;
 }

 cout<<toffees;

 return 0;

}
