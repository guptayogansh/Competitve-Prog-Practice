#include<iostream>
#include<string.h>
using namespace std;

int main(){

char str[100];
int length;

  cin>>str;
  length = strlen(str);

  for(int i=0;i<length;i++){

     if(str[i]>=65 && str[i]<=90)
        str[i] = str[i] + 32;
     else if(str[i]>=97 && str[i]<=122)
        str[i] = str[i] - 32;
     else
        break;

  }

  cout<<str;
  return 0;
}

