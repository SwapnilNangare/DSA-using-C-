#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i=0,j=0;
   int k=0;
    while(i<n && j<m){
        if(arr1[i] <arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k++]=arr2[j++];
             }
    }

    //copy krdo first array ke elements

    while (i<n)
    {
        arr3[k++]=arr1[i++];
        
    }
    
  while (j<m)
    {
        arr2[k++]=arr2[j++];
      
    }
}
void printf(int ans[],int n)
{
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" "<<endl;
    }
}



int main(){

     int arr1[5]={1,3,5,7,9};

     int arr2[]={2,4,6};

     int arr3[8]={0};

     merge(arr1, 5,arr2,3,arr3);
     printf(arr3,8);


    return 0;
}