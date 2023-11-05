#include<iostream>
using namespace std;

int main(){
    int counter=7;
    for(int i=1;i<=4;i++){
        for(int j=2;j<=i;j++){
            cout<<" ";
        }
        for(int k=counter;k>0;k--){
            cout<<"*"<<"";
        }
        counter-=2;
        cout<<endl;
    }
}