#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int r,sum=0;
    while (n>0)
    {
        r = n%10;
        sum = sum + r;
        n/=10;
    }
    cout<< sum << endl;
    
}