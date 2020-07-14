#include<iostream>
using namespace std;

int main(){
 int ar[3],l,r,k,count=0;

 for(int j=0;j<3;j++){
    cin>>ar[j];
 }
 l=ar[0];
 r=ar[1];
 k=ar[2];

 for(int i=l;i<=r;i++){
    if(i%k==0){
        count++;
    }
 }

 cout<<count<<endl;

return 0;
}

