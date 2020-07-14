#include<iostream>
using namespace std;

string validity(string input){

  for(int i=0;i<9;i++){

    if((input.at(0)+input.at(1))%2!=0 ||
       (input.at(3)+input.at(4))%2!=0 ||
       (input.at(4)+input.at(5))%2!=0 ||
       (input.at(7)+input.at(8))%2!=0 )
        return "invalid";
    else if(input[2]=='A' || input[2]=='E'||input[2]=='I'||input[2]=='O'||input[2]=='U'||input[2]=='Y')
        return "invalid";
    else
        return "valid";
  }

}
int main(){
string input;
cin>>input;
cout<<validity(input);

 return  0;
}
