#include<iostream>
using namespace std;
int main(){
    int m,count,p,i,maxf=0;//(frequency can not be less than 0)
    cout<<"Enter the number of elements in the array: ";
    cin>>m;
    int a[m],f[m]={-1};
    cout<<"Enter elements in the array: ";
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"The entered array is: ";
    for(i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<m;i++){
        if(f[i]==0) count=1;
        for(int j=i+1;j<m;j++){
            if(a[i]==a[j]){
               count++;
               f[j]=0;
            }
        }
        f[i]=count;
        if(f[i]>maxf){
            maxf=f[i];
            p=i;
        }
    }
    cout<<"The maximum occuring element is "<<a[p];
    return 0;
}