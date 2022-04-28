#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //max heap

     priority_queue<int> p;
     p.push(1);
     p.push(5);
     p.push(10);
    
     cout<<"Max heap :"<<p.top()<<endl;
     

return 0;
}
