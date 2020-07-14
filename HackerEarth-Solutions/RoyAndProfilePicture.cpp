#include<iostream>
#include<math.h>
using namespace std;

int main(){

 int l,n,w,h,ar[2];

 cin>>l;
 cin>>n;
 string status[n];
 for(int i=0;i<n;i++){

   for(int i=0;i<2;i++){
     cin>>ar[i];
  }
   w = ar[0];
   h = ar[1];

   if(w<l || h<l)
     status[i]="UPLOAD ANOTHER";
   else if(w==l && h==l || w==h)
     status[i]="ACCEPTED";
   else
     status[i]= "CROP IT";

 }
for(int i=0;i<n;i++)
 cout<<status[i]<<endl;

 return 0;
 }
