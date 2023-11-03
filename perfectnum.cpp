#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0,r;
    int i;
  
    for(int i=1;i<n;i++){
        r=n%i;
        if(r==0){
            sum = sum + i;
        }
       
    }
    if(sum==n){
        cout<< "Perfect Number"<<endl;
    }
    else{
        cout<< "Not perfect number"<< endl;
    }
    

}