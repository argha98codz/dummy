#include<bits/stdc++.h> 
using namespace std; 
  
int main(){
    int arr[] = { 19, 55, 51, 59, 56, 32 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
	cout << "Array before Reversal: "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    
	reverse(arr, arr + n);
	
    cout << "\nReversed Array: "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
	
    return 0; 
} 