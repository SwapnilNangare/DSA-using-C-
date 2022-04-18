#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter Value of A" << endl;
    cin >> a;
    cout << "Enter Value of B " << endl;
    cin >> b;

    char op;
    cout << "Enter Operaton " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;

        break;

    case '-':
        cout << (a - b) << endl;

        break;
    case '*':
        cout << (a * b) << endl;

        break;
    case '/':
        cout << (a / b) << endl;
        break;

    default:
        cout << "invalid operator " << endl;
        break;
    }
}