#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(3);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout<<"End "<<endl;
    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << endl;
    }
cout<<"5 is present "<<s.count(-5)<<endl;

    return 0;
}