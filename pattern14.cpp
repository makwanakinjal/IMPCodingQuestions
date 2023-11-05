#include<iostream>
using namespace std;

int main(){
    int counter=1;

    for(int i=1;i<=6;i++){
        for(int j=1;j<=6-i;j++){
            cout<<" ";
        }

        for(int k=1;k<=counter;k++){
            cout<<"*"<<"";
        }
        counter+=2;
     cout<<endl;
       
    }
}