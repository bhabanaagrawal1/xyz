#include<iostream>
using namespace std;
int fibo(int n){
    int a=0,b=1,p;
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else{
       return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter the number of term: ";
    cin>>n;
    cout<<"The fibonacci number is: "<<fibo(n);
    return 0;
}