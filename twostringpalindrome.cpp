#include<iostream>
using namespace std;

int twopalindrome(int input2){
    int r,sum=0;
    int temp=input2;
    while(input2>0){
        r = input2%10;
        sum = sum *10 + r;
        input2/=10;
    }
    if(temp==sum){
        cout<<"It is Palindrome"<<endl;
    }
    else{
        cout<< " It is not palindrome" << endl;
    }

    
}
int main(){

   twopalindrome(22);
}