#include <iostream>
#include <map>
using namespace std;

int main()
{
    //key value paire data store

map<int,string> mp;
mp[1]="Swapnil";
mp[12]="Sagar";
mp[3]="Rama";

mp.insert({5,"bhim"});

for(auto i :mp)
{
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<"Finding 3 :"<<mp.count(3)<<endl;
return 0;
}