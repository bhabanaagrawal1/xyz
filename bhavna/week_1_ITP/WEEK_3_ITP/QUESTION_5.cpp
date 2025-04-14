#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,k=0,i,j;
    cout<<"Enter the number of elements in the array: ";
    cin>>m;
    int a[m];
    cout<<"Enter the elements in the array: ";
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            if(a[j]==a[i] && a[i]!=INT_MIN && a[j]!=INT_MIN){
                a[j]=INT_MIN;
            }
        }
    }
    for(i=0;i<m;i++){
        if(a[i]!=INT_MIN){
            a[k++]=a[i];
        }
    }
    cout<<"The array with all the distinct elements is: ";
    for(i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}