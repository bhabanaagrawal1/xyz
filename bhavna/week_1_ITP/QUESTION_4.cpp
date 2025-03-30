#include<iostream>
using namespace std;
int main(){
    int n,p,i,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    p=n;
    //Binary Conversion
    if(n==0){
        cout<<"The binary conversion of "<<n<<" is "<<0;
    }else{
    for(i=n;i!=0;i/=2){
        count++;
    }
    int a[count];
    for(i=0;i<count;i++){
        a[i]=p%2;
        p/=2;
    }
    p=n;
    for(i=0;i<count/2;i++){
        int temp=a[i];
        a[i]=a[count-1-i];
        a[count-1-i]=temp;
    }
    cout<<"The binary conversion of "<<n<<" is ";
    for(i=0;i<count;i++){
        cout<<a[i];
    }
    }
    cout<<endl;
    count=0;
    //Octal Conversion
    if(n==0){
        cout<<"The octal conversion of "<<n<<" is "<<0;
    }else{
    for(i=n;i!=0;i/=8){
        count++;
    }
    int b[count];
    for(i=0;i<count;i++){
        b[i]=p%8;
        p/=8;
    }
    p=n;
    for(i=0;i<count/2;i++){
        int temp=b[i];
        b[i]=b[count-1-i];
        b[count-1-i]=temp;
    }
    cout<<"The octal conversion of "<<n<<" is ";
    for(i=0;i<count;i++){
        cout<<b[i];
    }
    }
    return 0;
}