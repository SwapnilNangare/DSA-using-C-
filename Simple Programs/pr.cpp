// #include<iostream>
// using namespace std;
// int main(){
// int a,b=1;
// a=10;
// if(++a){
//     cout<<b;
// }
// else{
//     cout<<++b;
// }

//     return 0;

// int a=1,b=2;
// if(a-->0 && ++b>2)
// {
//     cout<<"one"<<endl;
// }
// else{
//     cout<<"Two"<<endl;
// }
// cout<<a<<" "<<b<<endl;

// }

// int num=3;
// cout<<(25*(++num));

// int a=1;
// int b=a++;
// int c=++a;
// cout<<b<<endl;
// cout<<c<<endl;
// return 0;
// }

// for loop
// #include<iostream>
// using namespace std;
// int main(){

// for (int i = 0; i<15; i+=2)
// {
//  cout<<i<<" ";
// if(i&1){
//     continue;
// }
// i++;
// } 

// return 0;
// }
//
#include<iostream>
using namespace std;
int main(){

for (int  i = 0; i < 5; i++)
{
    for (int  j = i; j <= 5; j++)
    {
        cout<<i<<" "<<j<<" "<<endl;
    }
    
}

return 0;
}