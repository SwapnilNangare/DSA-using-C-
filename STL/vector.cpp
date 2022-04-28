#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> v;

v.push_back(1);

cout<<v.capacity();

v.push_back(2);

cout<<v.capacity();
v.push_back(5);

cout<<v.capacity()<<endl;

cout<< "size is "<<v.size()<<endl;
cout<<"before pop "<<endl;
for(int i:v){
    cout<<i<<" "<<endl;
}
v.pop_back();

cout<<"after pop "<<endl;
for(int i:v){
    cout<<i<<" "<<endl;
}

cout<<"before clear size "<<v.size()<<endl;
v.clear();
cout<<"after clear size "<<v.size()<<endl;

//copying elements to vector
vector<int> a(5,2);
vector<int> last(a);
cout<<"Print last "<<endl;
for(int i:last){
    cout<<i<<" ";
}cout<<endl;




    return 0;
}