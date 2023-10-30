#include<iostream>
using namespace std;
void reverseword(string str){
    if(str.length()==0)
    return;

    string ros = str.substr(1);
    reverseword(ros);
    cout<< str[0]<<" ";
}
int main(){
    string str = "Hello";
    reverseword(str);
}