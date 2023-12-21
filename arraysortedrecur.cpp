#include<iostream>
using namespace std;

bool issorted(int arr[],int size){

    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1])
    return false;
    else{

        int remainingpart = issorted(arr+1,size-1);
        return remainingpart;
    }
}
int main(){
    int arr[] = {1,2,4,1,9};
    int size = 5;

    bool ans = issorted(arr,size);
    if(ans){
        cout<< "It is sorted"<<endl;
    }
    else
    cout<<"It is not sorted" << endl;

}