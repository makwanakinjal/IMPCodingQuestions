#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,2,3,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans=0;

    for(int i=0;i<size;i++){
        ans^=arr[i];
    }
    cout<< ans << endl;
}