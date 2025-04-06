#include<iostream>
using namespace std;
int main(){
    int m,i,j;
    cout<<"Enter the number of rows or columns in the array: ";
    cin>>m;
    int a[m][m],b[m][m],sum[m][m],p[m][m],q[m][m];
    cout<<"Enter the elements of the first array:- ";
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the second array:- ";
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    cout<<"The first array:- "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The second array:- "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"The sum of the two original matrices is: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            p[i][j]=a[j][i];
            q[i][j]=b[j][i];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            sum[i][j]=p[i][j]+q[i][j];
        }
    }
    cout<<"The sum of the two transposed matrices is: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}