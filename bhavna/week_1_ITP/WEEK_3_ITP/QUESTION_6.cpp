#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        int x=(int)s[i];
        if(x>64 && x<91){
            s[i]=(char)(x+32);
        }
    }
    cout<<"The string in lowercase is "<<s;
    return 0;
}