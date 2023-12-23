#include<iostream>
using namespace std;

int merge(int arr[],int s,int e){

    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        first[i] = arr[k++]; 
    }

    k = mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[k++];
    }

   int index1 =0;
   int index2 = 0;
    k = s;

   while(index1 < len1 && index2 < len2){

    if(first[index1] < second[index2]){
        arr[k++] = first[index1++];
    }
    else{
    arr[k++] = second[index2++];
    }
   }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }

     while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }


}
int mergesort(int arr[] , int s , int e){

    if(s>=e)
    return 1 ;

    int mid = s+(e-s)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[] = {3,87,46,90,24,55};
    int size = 6;

    mergesort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    
}