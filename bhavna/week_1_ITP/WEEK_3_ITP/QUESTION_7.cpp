#include<iostream>
using namespace std;
int main(){
    string s;
    char ch;
    int j=0;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<"Enter the character whose all the occurance you want to remove: ";
    cin>>ch;
    for(int i=0;i<s.length();i++){
        if(s[i]!=ch){
            s[j++]=s[i];
        }
    }
    s.resize(j);
    cout<<"The string after removing that character is "<<s;
    return 0;
}