#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a =0;
    int b =1;
    cout<< a << " ";
    cout<< b << " ";
    int c;
    for(int i=0;i< n-2 ;i++){
        c= a+b;
        cout << c << " ";
        a = b;
        b = c;
    }
}