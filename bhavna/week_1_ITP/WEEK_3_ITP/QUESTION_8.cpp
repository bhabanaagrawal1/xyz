#include<iostream>
using namespace std;
int main(){
    string s;int flag=1;
    cout<<"Enter the string: ";
    getline(cin,s);
    int x=x=s.length();
    for(int i=0;i<x/2;i++){
        if(s[i]!=s[x-1-i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"The string you entered is a palindrom";
    }else{
        cout<<"Not a palindrom";
    }
    return 0;
}