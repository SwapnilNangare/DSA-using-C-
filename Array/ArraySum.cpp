#include <iostream>
using namespace std;
int sum(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout<<"Enter Array Size "<<endl;
    cin >> size;

    int num[100];
    cout << "Enter Element " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "sum  is " << sum(num, size) << endl;

    return 0;
}