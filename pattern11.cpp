#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<6;i++){
        char ch = 'A';
        for(int j=i;j<6;j++){
            cout<< char(ch + 6 -1 - j)<< " ";
        }
        cout<<endl;
    }
}