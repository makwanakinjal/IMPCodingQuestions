#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int max;

    max = (n1>n2) ? n1 : n2;
    while(1){
        if(max%n1==0 && max%n2==0){
            cout<< max << endl;
            break;
        }
       ++max;
    }

}