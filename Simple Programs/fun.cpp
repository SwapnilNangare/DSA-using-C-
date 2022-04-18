#include<iostream>
using namespace std;

bool Iseven(int a){
    if(a &1){
        return 0;
        }
    else{
         return 1;
    }
}

int main(){
int num;
cout<<"Enter Number "<<endl;
cin>>num;
if(Iseven(num)){
    cout<<"Number is Even "<<endl;
}
else{
    cout<<"Number is Odd "<<endl;
}

}