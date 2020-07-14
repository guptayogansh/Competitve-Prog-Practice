#include<iostream>
#include<string.h>
using namespace std;

void coordinateFinder(string input){

 int x=0,y=0;
 for(int i=0;i<input.length();i++){
    if(input.at(i) == 'L')
        x = x - 1;
    else if(input.at(i) == 'R')
        x = x + 1;
    else if(input.at(i) == 'U')
        y = y + 1;
    else if(input.at(i) == 'D')
        y = y - 1;
    else
        break;
 }
   cout<<x<<" "<<y;
}

int main(){

string input;

 cin>>input;
 coordinateFinder(input);

return 0;

}
