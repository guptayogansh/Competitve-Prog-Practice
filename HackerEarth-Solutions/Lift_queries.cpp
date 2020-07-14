#include<bits/stdc++.h>
using namespace std;
int main(){

  long int t;
  int n;
  int liftA=0,liftB=7;

  vector<int> nvalues;

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n;
    nvalues.push_back(n);
  }

 for(int i=0;i<nvalues.size();i++){
    if(nvalues[i]-liftA < liftB-nvalues[i]){
        cout<<"A"<<"\n";
        liftA = nvalues[i];
    }
    else if(nvalues[i]-liftA > liftB-nvalues[i]){
        cout<<"B"<<"\n";
        liftB = nvalues[i];
    }
    else{
        cout<<"A"<<"\n";
        liftA = nvalues[i];
    }

 }

return 0;
}
