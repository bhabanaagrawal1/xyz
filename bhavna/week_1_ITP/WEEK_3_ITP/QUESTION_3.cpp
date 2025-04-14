#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    int j=0;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            s[j++]=s[i];
        }
    }
    s.resize(j);
    cout<<"The string after removing the characters except alphabets is: "<<s;
    return 0;
}