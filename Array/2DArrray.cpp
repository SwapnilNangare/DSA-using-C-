#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        if(arr[row][col]==target){
            return 1;
        }
    }
}
return 0;

}

int main()
{

    // 3 rows and 4 col

    int arr[3][4];
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // tacking array

    // int arr[3][4]={{11,22,33,44},{22,33,44,55},{33,44,55,66}};
    // // row
    cout<<"Enter Element "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // searching elements

    cout << "Enter the Elemets to search " << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Not Found " << endl;
    }

    return 0;
}