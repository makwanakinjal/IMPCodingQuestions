#include<iostream>
#include<cmath>
using namespace std;

int diagonaldiff(int arr[3][3], int size){
   int left=0;
   int right=0;
   int ans;

   for(int i=0;i<size;i++){
    left+= arr[i][i];
    right+= arr[i][size-1-i];
   }
    ans = abs(left-right);
    return ans;
}
int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int size = 3; // size of the array
    int difference = diagonaldiff(arr, size);
    cout<< difference << endl;
    return 0;
}
