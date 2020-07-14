#include<iostream>
using namespace std;

bool isprime(int i)
{
     if (i <= 1)
        return false;

    for(int j=2;j<i;j++)
        if(i%j==0)
         return false;
   return true;
}


void primenumbers(int n)
{
    for(int i=2;i<n;i++)
    {
        if(isprime(i))
          cout<<i<<" ";
    }
}

int main() {
	int n;
	cin>>n;
	primenumbers(n);
	return 0;
}
