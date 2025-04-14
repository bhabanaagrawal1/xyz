#include<iostream>
using namespace std;

int main(){
    int m, count, p = 0, i, maxf = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> m;
    int a[m], f[m]; 
    for(i = 0; i < m; i++){
        f[i] = -1;
    }
    cout << "Enter elements in the array: ";
    for(i = 0; i < m; i++){
        cin >> a[i];
    }
    cout << "The entered array is: ";
    for(i = 0; i < m; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(i = 0; i < m; i++){
        if(f[i] == -1){  
            count = 1;
            for(int j = i + 1; j < m; j++){
                if(a[i] == a[j]){
                    count++;
                    f[j] = 0;
                }
            }
            f[i] = count;

            if(f[i] > maxf){
                maxf = f[i];
                p = i; 
            }
        }
    }
    cout << "The maximum occurring element is " <<a[p];
    return 0;
}
