

#include <iostream>

using namespace std;

int main() {
	int t, sum=0,costg,costp,n,first,second,ar[2];
	cin >> t;

	for(int i=1;i<=t;i++){

     cin>>costg;
	 cin>>costp;

	 if(i%2==0){
         costg=costg+costp;
        costp = costg-costp;
        costg=costg-costp;
	 }

	 cin>>n;


	    for(int j=0;j<n;j++){

              for(int k=0;k<2;k++){
                  cin>>ar[k];
              }
             first = ar[0];
             second = ar[1];
	        if(first==0 && second==0)
	           sum=sum+0;
	       else if(first==0&&second==1)
	          sum=sum+costp;
	       else if(first==1&&second==0)
	         sum= sum+costg;
	       else
	         sum = sum+costg+costp;

	    }

	         cout<<sum<<endl;
             sum=0;

	}

 return 0;

}

