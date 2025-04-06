#include<iostream>
using namespace std;
int sum_of_dig(int n){
    if(n==0){
        return 0;
    }else if(n!=0){
        return n%10+sum_of_dig(n/10);
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The sum of the digits of "<<n<< " is: ";
    if(n>=0){
        cout<<sum_of_dig(n);
    }else{
        cout<<(-1)*sum_of_dig(n);
    }
    return 0;
}