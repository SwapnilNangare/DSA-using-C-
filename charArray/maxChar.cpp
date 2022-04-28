#include <iostream>
using namespace std;

char getMax(string s){

    int arr[26]={0};


//create an array of couting of number 
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //lowercase
        int number=0;
        number=ch-'a';
        arr[number]++;
    }

//find max occurace char
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;

}

int main()
{
    string s;
    cin>>s;

    cout<<getMax(s)<<endl;



    return 0;

}