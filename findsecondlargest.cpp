#include<iostream>
#include<algorithm>
using namespace std;


int main(){
//     int n;
//     cin>>n;
// int arr[n],large,sl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

// large = arr[0];
// for(int i=0;i<n;i++){
//     if(large<arr[i]){
//         large = arr[i];
//     }
// }
// sl = arr[0];
// for(int i=0;i<n;i++){
//     if(sl<arr[i]){
//   if(arr[i]!=large)
//     sl = arr[i];
//     }
  
// }

// cout<< "Second Largest Num"<< sl << endl;

int arr[] = {5, 2, 8, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    if (n < 2) {
        cout << "Invalid Input" << endl;
    } else {
        cout << "Second largest element is " << arr[n - 2] << endl;
    }

    return 0;

}