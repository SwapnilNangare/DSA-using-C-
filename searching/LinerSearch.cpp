#include <iostream>
using namespace std;

bool Liner(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
     
    }
    return 0;
}

int main()
{
    int key;
    cout << "Enter Key" << endl;
    cin >> key;
    int arr[5] = {1, 2, 3, 4, 5};
    bool found = Liner(arr, 5, key);

    if (found){
        cout<<"Key found "<<endl;
    }
    else{
        cout<<"Key not found "<<endl;
    }

        return 0;
}