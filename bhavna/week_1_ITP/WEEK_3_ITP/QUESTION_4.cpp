#include<iostream>
using namespace std;
int main(){
    int n,k,temp,i;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the value of k: ";
    cin>>k;
    if(k>n){
        k%=n;
    }
    for(i=0;i<k;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(i=0;i<k/2;i++){
        temp=a[i];
        a[i]=a[k-1-i];
        a[k-1-i]=temp;
    }
    for(i=k;i<n;i++){
        temp=a[i];
        a[i]=a[n-k+2];
        a[n-k+2]=temp;
    }
    cout<<"The array after rotating its elements is: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}