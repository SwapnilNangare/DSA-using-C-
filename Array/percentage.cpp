#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number " << endl;
    cin >> num;

    int per;
    cout << "Enter % you want " << endl;
    cin >> per;


int percentage=num*per/100;
cout<<"your percentage is "<<percentage<<endl;

    return 0;
}