#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=n-i;k>0;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=2;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}