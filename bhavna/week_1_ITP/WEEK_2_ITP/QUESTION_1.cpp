#include<iostream>
using namespace std;
int main(){
    int m,n,i,j=0;
    cout<<"Enter the number of elements in the first array: ";
    cin>>m;
    cout<<"Enter the number of elements in the second array: ";
    cin>>n;
    int a[m],b[n];
    cout<<"Enter the elements of the first array:- ";
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements of the second array:- ";
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<m+n;i++){
        if(i<m){
            a[j++]=a[i];
        }else{
            a[j++]=b[i-m];
        }
    }
    cout<<"The merged array is: ";
    for(int i=0;i<j;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing the reverse of the newly merged array is: ";
    for(int i=j-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
