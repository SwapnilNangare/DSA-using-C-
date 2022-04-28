#include <iostream>
using namespace std;

int getLenght(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    cout<<"Enter Name "<<endl;
    char name[20];
    cin>>name;
    cout<<"Your Name "<<endl;
    
    cout<<name<<endl;
    cout<<"Lenght of name is "<<getLenght(name)<<endl;



    return 0;
}