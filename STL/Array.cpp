#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4> a={1,2,3,4};
   for(int i=0;i<a.size();i++){
       cout<<a[i]<<" "<<endl;
   }
   cout<<"Element at 2nd Index "<<a.at(2)<<endl;
   cout<<"Empty or not "<<a.empty()<<endl;

   cout<<"First Elements -> "<<a.front()<<endl;
   cout<<"Last Elements -> "<<a.back()<<endl;


    return 0;
}