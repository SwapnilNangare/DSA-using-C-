#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d;
   
    d.push_back(1);
    d.push_front(2);
   
    for(int i:d){
        cout<<i<<" ";
    }
    // cout<<"poping to back "<<endl;
    // // d.pop_front();

    // for(int i:d){
    //     cout<<i<<" ";
    // }
    cout<<endl;

  cout<<"printing first index element "<<d.at(1)<<endl;

     return 0;
}