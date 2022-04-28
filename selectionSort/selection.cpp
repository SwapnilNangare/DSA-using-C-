#include<iostream>
using namespace std;

int selectionSort(int arr[], int n)
{   
    for(int i=0;i<n-1;i++){
		
		int min=i;
		for(int j=i+1;j<n;j++){
			
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}

     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
   
    return 0;
}

int main()
{
    int a[5]={5,1,3,2,4};


 cout<<selectionSort(a,5);
    return 0;
}