#include<iostream>
#include<string.h>
#define n 100
using namespace std;

int main(){

char str[n];
int length;
int flag=0;

  cin>>str;
  length = strlen(str);

  for(int i=0;i<length;i++){
    if(str[i]!=str[length-1-i]){
        flag=1;
        break;
    }
  }

  if(flag){
    cout<<"NO"<<endl;
  }

  else{
    cout<<"YES"<<endl;
  }

return 0;
}

