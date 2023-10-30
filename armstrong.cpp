#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int r,temp,sum=0;
    temp=n;
    while(n>0){
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    if(temp==sum){
        cout<<"It is Armstrong Num"<<endl;
    }
    else
    cout<< "It is not Armstrong Num" << endl;
}