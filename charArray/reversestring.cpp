#include <iostream>
using namespace std;



bool checkPalindrom(char a[],int n){
int s=0;
int e=n-1;
while(s<=e){
    if(a[s] !=a[e]){
        return 0;
    }
    else{
        s++;
        e--;
    }

}
return 1;

}


void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);

    }
}

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
    cout<<"Your Name ";
    int len=getLenght(name);
    
    cout<<name<<endl;
    cout<<"Lenght of name is "<<len<<endl;

     
     reverse(name,len);
     cout<<"your name is "<< name<<endl;

      cout<<"palindrom is "<< checkPalindrom(name,len)<<endl;




    return 0;
}