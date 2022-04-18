// #include<iostream>
// using namespace std;
// int main(){

// int n;
// cout<<"Enter a number "<<endl;
// cin>>n;

// for(int i=1;i<=n;i++){
//     cout<<i<<endl;
// }
//     return 0;
// }

// // sum of n number
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a number "<<endl;
// cin>>n;
// int sum=0;

// for(int i=1;i<=n;i++){

// sum=sum+i;
// }
// cout<<"sum is "<< sum<<endl;
    
    
    
    
//     return 0;

// }

// fib of n number
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a number "<<endl;
// cin>>n;
// int a=0,b=1;
// cout<<a<<" "<<b<<" ";

// for(int i=1;i<=n;i++){
// int c=a+b;
// cout<<c<<" ";
// a=b;
// b=c;
// }
// return 0;

// }

// prime number
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number "<<endl;
cin>>n;

bool isPrime=1;

for(int i=2;i<n;i++){

if(n%i==0){
    isPrime=0;
    break;
}
}
if(isPrime==0){
    cout<<"Not a Prime Number "<<endl;

}
else{
    cout<<"Prime Number "<<endl;
}


return 0;

}