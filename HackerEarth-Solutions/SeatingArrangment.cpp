#include<iostream>
#include<map>
#include<cmath>
using namespace std;

int getSeat(int seatNum)
{
    map<int,string> seating_map;
    int remain = seatNum%12;
    if(remain == 0){
	remain = 12;
}
    if(remain<7)
      return seatNum + 11-(remain-1)*2;
    else
      return seatNum - abs(11-(remain-1)*2);
}

string getSeatType(int seatNum)
{
    map<int,string> seating_map;
    seating_map.insert(pair<int,string>(1,"WS"));
    seating_map.insert(pair<int,string>(2,"MS"));
    seating_map.insert(pair<int,string>(3,"AS"));
    seating_map.insert(pair<int,string>(4,"AS"));
    seating_map.insert(pair<int,string>(5,"MS"));
    seating_map.insert(pair<int,string>(0,"WS"));
    return seating_map[seatNum%6];
}
int main()
{
    int N, T;
    cin>>T;

    for(int i=0;i<T;i++)
    {
        cin>>N;
        cout<<getSeat(N)<<" "<<getSeatType(N)<<"\n";
    }
    return 0;
}
