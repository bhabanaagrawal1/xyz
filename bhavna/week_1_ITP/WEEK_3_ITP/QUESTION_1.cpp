#include<iostream>
using namespace std;

int main(){
    int n, temp, i;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int a[n]; 
    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    int start = 0, end = 1;
    while(end < n){
        if(a[start] < 0 && a[end] >= 0){
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end++;
        }
        else if(a[start] >= 0){
            start++;
            if(start == end) end++;
        }
        else {
            end++;
        }
    }

    cout << "Modified array: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
