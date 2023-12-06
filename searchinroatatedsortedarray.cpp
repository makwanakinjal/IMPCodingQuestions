#include<iostream>
using namespace std;
int getpivot(int arr[] , int n){

    int s=0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    mid = s+(e-s)/2;

    }
    return s;
}

int binarysearch(int arr[],int n,int s , int e ,int key){

     s= 0;
    e = n-1;
    int mid = s+(e-s)/2;

    while (s<e)
    {
       if(arr[mid]==key)
       return mid;

       if(arr[mid]<key){
        s = mid+1;
       }
       else{
        e = mid-1;
       }

       mid=s+(e-s)/2;
    }
    return -1;

}
int main(){
    int arr[] = {7,9,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 2;

    int pivot = getpivot(arr,5);
    if(arr[pivot]<= target && target<=arr[size-1]){
        cout<< binarysearch(arr,5,pivot,size-1,2);
    }
    else{
        cout<< binarysearch(arr,5,0,pivot-1,2);
    }

}