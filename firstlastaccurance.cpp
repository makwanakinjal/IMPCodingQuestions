#include<iostream>
using namespace std;

int firstaccurance(int arr[],int n,int key){
    int start=0;
    int end = n-1;
    int ans=-1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
          ans = mid;
            end = mid-1;
        } else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid -1;
        }

         mid = start + (end - start)/2;
       
    }
     return ans; 
}
int lastaccurance(int arr[],int n,int key){
    int start=0;
    int end = n-1;
    int ans=-1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
           ans = mid;
            start = mid+1;

        } else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid -1;
        }

         mid = start + (end - start)/2;
       
    }
     return ans; 
}


int main(){
    int arr[] = {0,1,2,2,2,2,6};
    int n = sizeof(arr) / sizeof(arr[0]);

cout<< "First accurance of 2 is " << firstaccurance(arr,6,2) << endl;
cout<<"Last accurance of 2 is " << lastaccurance(arr,6,2) << endl; 
}