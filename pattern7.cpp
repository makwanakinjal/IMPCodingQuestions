#include<iostream>
using namespace std;

int main(){
    int n=1;
    for(int i=0;i<6;i++){
        for(int j=0;j<=i;j++){
            cout<< n++ << " " ;
        }
        cout<< endl;
    }
}