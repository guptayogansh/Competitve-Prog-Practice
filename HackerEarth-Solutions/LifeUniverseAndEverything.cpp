#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
vector<int> sequence;
while(!cin.eof()){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    sequence.push_back(n);
}
for(vector<int>::iterator it = sequence.begin();it!=sequence.end();it++){
    if(*it == 42)
        break;
    else
        cout<<*it<<"\n";
}

return 0;
}
