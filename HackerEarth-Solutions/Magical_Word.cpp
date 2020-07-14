#include<bits/stdc++.h>

using namespace std;

int main(){

  string input;
  int n,temp,t,length;

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>t;
  while(t--){

  cin>>length;
  cin>>input;
  for(int i=0;i<length;i++){

     n = input[i];
     if(n<65)
        temp = 67;
     else if(n>=65&&n<=93)
     {
      if(n>=65&&n<=69)
         temp= 67;
      else if(n>=70&&n<=72)
        temp= 71;
      else if(n>=73&&n<=76)
        temp = 73;
      else if(n>=77&&n<=81)
        temp = 79;
      else if(n>=81&&n<=86)
         temp = 83;
      else
        temp=89;
     }
     else{
      if(n>=94&&n<=99)
        temp = 97;
      else if(n>=100&&n<=102)
        temp = 101;
      else if(n>=103&&n<=105)
        temp = 103;
      else if(n>=106&&n<=108)
        temp = 107;
      else if(n>=109&&n<=111)
        temp = 109;
      else
        temp=113;
     }

     input[i] = temp;

 }
   cout<<input<<"\n";

  }
 return 0;
}
