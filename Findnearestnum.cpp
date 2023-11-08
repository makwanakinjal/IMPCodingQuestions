#include<iostream>
using namespace std;

int main(){
    int arr[6] = {3,7,11,12,24,76};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target=11;
    int diff;
    int nearest= arr[0];

    for(int i=0;i<size;i++){
        if(target==arr[i]){
            continue;
        }
        int currentDiff = abs(target - arr[i]);
        if(currentDiff < diff){
            diff = currentDiff;
            nearest = arr[i];
        }
    }
    cout << "Nearest value to 11: " << nearest << endl;
    }
