#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<=0){
        cout<<"Not a perfect square";
    }else{
    for(int i=n-1;i>0;i--){
        if(n%i==0){
            if((int)(pow(i,2))==n){
                flag=1;
                break;
            }
        }
    }
    if(flag==1 || n==1){
        cout<<"Perfect Square";
    }else{
        cout<<"Not a Perfect Square";
    }
    }
    return 0;
}