#include<iostream>
#include<vector>
using namespace std;

void gokis_breakup(int n,int x){

int y;
vector<int> yelement;
 for(int i=0;i< n;i++)
 {
  cin>>y;
  yelement.push_back(y) ;
 }
 for(int i=0;i<yelement.size();i++){
    if(yelement[i]>=x)
         cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
 }

}

int main(){

 int n,x;
 cin>>n;
 cin>>x;
 gokis_breakup(n,x);
 return 0;
}
