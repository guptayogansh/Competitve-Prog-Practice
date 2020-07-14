#include<iostream>
using namespace std;

string BookOfPotionMaking(int isbn){

   int count=0;
   cout<<isbn<<endl;
   while(isbn>0){
    isbn = isbn/10;
    cout<<isbn<<endl;
    count++;
   }
 cout<<count;

   if(count<10 || count>10){
    return "Illegal";
   }
   else{
      return "legal";
   }

}

string Helper(int isbn){

   int sum =0;
   for(int i =10;i>=1;i--){

     isbn = isbn%10;
     sum = sum + i*isbn;
   }

   if(sum%11==0){
    return "Legal ISBN";
   }
   else{
    return "Illegal ISBN";
   }

}

int main(){
long long int isbn;
cin>>isbn;

string decide = BookOfPotionMaking(isbn);

 if(decide == "legal"){
    cout<<Helper(isbn);
 }

 else{
    cout<<"Illegal ISBN";
 }

return 0;
}
