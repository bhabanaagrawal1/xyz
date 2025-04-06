#include<iostream>
using namespace std;
void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int n,i,j;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The sorted array is: ";
    sort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
