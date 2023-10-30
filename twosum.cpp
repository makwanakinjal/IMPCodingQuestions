#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,7,12,8,9,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target=9;
    int arr2[2];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i] + arr[j] == target &&i!=j){
                arr2[0] = arr[i];
                arr2[1] = arr[j];
            }
        }
    }
    cout<< arr2[0] << " " << arr2[1];

}