
#include<iostream>
using namespace std;


string BricksGame(int n){

int pbrick,mbrick,sum=0,diff;

for(int i=1;i<=n;i++){
    pbrick=i;
    mbrick=i*2;
    sum = sum + pbrick+mbrick;
    if(sum>n)
        diff = sum - n;
        if(mbrick>diff)
        {
            mbrick = mbrick - diff;
            return "Motu";
        }
        else
        {
            diff = diff - mbrick;
            mbrick=0;
            pbrick = pbrick - diff;
            return "Patlu";
        }
   }
}

int main(){

 long long int n;

 cin>>n;

 cout<<BricksGame(n);

 return 0;
}
