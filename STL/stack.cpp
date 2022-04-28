#include <iostream>
#include <stack>
using namespace std;

int main()
{
stack<int> s;

s.push(1);
s.push(2);
s.push(3);
s.push(4);

cout<<"Top elements "<<s.top()<<endl;
s.pop();

cout<<"Top elements "<<s.top()<<endl;

cout<<"Empty or Not "<<s.empty()<<endl;
return 0;
}