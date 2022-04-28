#include<iostream>
using namespace std;

int insertionSort( int arr[],int n){
    
	for(int i=1;i<n;i++){
	int temp=arr[i];
		int j=i-1;
		for(;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}	
		arr[j+1]=temp;
	
	}
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}

int main(){

    int arr[5]={2,1,3,4,5};
    cout<<insertionSort(arr,5);

    
    return 0;

}