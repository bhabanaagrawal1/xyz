#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<n){
               cout<<a<<"*";
            }else{
                cout<<a;
            }
            a++;
        }
        cout<<endl;
    }
    return 0;
}