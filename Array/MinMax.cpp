#include <iostream>
using namespace std;

int getMax(int num[],int n){

    int max= INT16_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
        max=num[i];
    }
    }
    return max;

}



int main()
{
    int size;
    cout<<"Enter Array size "<<endl;
    cin >> size;
    int num[100];
    cout<<"Enter Element "<<endl;
    for (int i = 0; i < size; i++)
    {
       cin>>num[i];
    }

    cout<<"Maximum value is "<<getMax(num,size)<<endl;
    return 0;
}