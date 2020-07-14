#include<bits/stdc++.h>
using namespace std;

int main(){

 string input;
 int key,n,temp;

 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 cin>>input>>key;

 for(int i=0;i<input.length();i++){
     n = key;
    if((int)input[i]>=65 && (int)input[i]<=90){
        while(n>25)
            n = n-26;
        temp = input[i]+n;
        if(temp>90){
            temp = temp - 90;
            input[i] = 65 + temp-1;
        }
        else
            input[i] = input[i] + n;
    }
    else if((int)input[i]>=97 &&(int)input[i]<=122){
         while(n>25)
            n = n-26;
        temp = input[i]+n;
        if(temp>122){
            temp = temp - 122;
            input[i] = 97 + temp-1;
        }
        else
            input[i] = input[i] + n;
    }
    else if((int)input[i]>=48 && (int)input[i]<=57){

     while(n>10)
            n = n-10;
        temp = input[i]+n;
        if(temp>57){
            temp = temp - 57;
            input[i] = 48 + temp-1;
        }
        else
            input[i] = input[i] + n;

    }

    else
          input[i] = input[i]+0;
 }

 cout<<input;

return 0;
}
