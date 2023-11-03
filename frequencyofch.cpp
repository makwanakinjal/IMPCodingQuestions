#include<iostream>
using namespace std;

int main(){
    string str = "abaacd";
    char target = 'a';
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==target){
            count++;
        }
    }
    cout<< target << " "<< count <<endl;

}