#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    int k,temp;
    vector<int> sequence;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>x>>k;
    while(x>0){
       temp = x%10;
       x = x/10;
       sequence.insert(sequence.begin(),temp);
    }

    for(vector<int>::iterator i=sequence.begin();i!=sequence.end();i++){
        if(k==0)
            break;
        else{
        if(*i==9)
              continue;
        *i = 9;
        k--;
        }

    }

    for(int i=0;i<sequence.size();i++){
        cout<<sequence[i];
    }

    return 0;
}
