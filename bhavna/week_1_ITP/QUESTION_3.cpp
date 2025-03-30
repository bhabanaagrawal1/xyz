#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,count=0,p;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<0){
        p=-n;
    }else{
        p=n;
    }
    for(int i=p;i!=0;i/=10){
        count++;
    }
    int a[count];
    for(int i=0;i<count;i++){
        a[i]=p%10;
        p/=10;
    }
    int max=INT_MIN;
    for(int i=0;i<count;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"The largest digit in "<<n<<" is "<<max;
    return 0;
}