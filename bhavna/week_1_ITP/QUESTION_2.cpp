#include<iostream>
using namespace std;
int main(){
    int a,b,c,flag=0;
    cout<<"Enter the first side: ";
    cin>>a;
    cout<<"Enter the second side: ";
    cin>>b;
    cout<<"Enter the third side: ";
    cin>>c;
    if(a+b>c || b+c>a || c+a>b){
        cout<<"Valid triangle";
        flag=1;
    }else{
        cout<<"Invalid triangle";
    }
    cout<<endl;
    if(flag==1){
        if(a==b && b==c){
            cout<<"Equilateral triangle";
        }else if(a==b || b==c || c==a){
            cout<<"Isosceles triangle";
        }else{
            cout<<"Scalene triangle";
        }
    }
    return 0;
}