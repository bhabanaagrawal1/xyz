#include<iostream>
using namespace std;
int main(){
    string s;int count_sc=0,count_al=0,count_dig=0;
    cout<<"Enter the string: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
    if(!isalnum(s[i])){
        if(isgraph(s[i]))
        count_sc++;
    }else if(isalpha(s[i])){
        count_al++;
    }else{
        count_dig++;
    }
    }
    cout<<"The total number of alphabets is "<<count_al<<" ,digits is "<<count_dig<<" and special character is "<<count_sc;
    return 0;
}