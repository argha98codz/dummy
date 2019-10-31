#include<bits/stdc++.h>

inline int arr_rev(int* arr, int pos, int len) {
    return arr[len - pos -1];
}

using namespace std;
int main(){
    int arr[] = { 19, 55, 51, 59, 56, 32, 67, 22, 24 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
	cout << "Array before Reversal: "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    cout << "\nVirtually Reversed Array: "; 
    for (int i = 0; i < n; i++) 
        cout << arr_rev(arr, i, n) << " ";
    
	reverse(arr, arr + n);
	
    cout << "\nReversed Array: "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    cout << endl;
    return 0; 
} 