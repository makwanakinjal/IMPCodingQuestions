#include<iostream>
using namespace std;


void saydigit(int n, string arr[]){

    if(n==0)
    return ;

    int digit = n%10;
    n/=10;

    saydigit(n,arr);


    
    cout<< arr[digit] << " ";
}
int main(){

    string arr[] = {"zero","One","Two","Three","Four","Five","six","seven","Eight","Nine"};

    int n;
    cin>> n;

    cout<< "Give me Digit in form of string"<<endl;
    saydigit(n,arr);


}