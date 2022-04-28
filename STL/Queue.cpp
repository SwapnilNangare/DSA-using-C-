#include <iostream>
#include <queue>
using namespace std;

int main()
{

queue<string> q;

q.push("Swapnil");
q.push("Ram");
q.push("Atul");

cout<<"First element :"<<q.front()<<endl;
q.pop();
cout<<"First element :"<<q.front()<<endl;
cout<<"size is  :"<<q.size()<<endl;

    return 0;
}