#include<iostream>
using namespace std;
int main(){
    int m,i;
    cout<<"Enter the number of elements in the array: ";
    cin>>m;
    cout<<"Enter the elements in the array: ";
    int a[m],b[m];
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
        b[i]=a[i];
    }
    cout<<"The copied array elements are: ";
    for(i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}