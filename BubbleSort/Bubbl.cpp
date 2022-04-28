#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}

int main()
{

    int arr[5] = {5, 4, 3, 1, 2};
    cout << bubbleSort(arr, 5);

    return 0;
}