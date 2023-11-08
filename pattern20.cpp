#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j<=i)
            cout<< j ;
            else{
                cout<<" ";
            }
        }
        for(int k=5;k>=1;k--){
            if(k<=i)
            cout<< k ;
            else
            cout<<" ";
        }
        cout<< endl;
    }
}