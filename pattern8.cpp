#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<6;i++){
        for(int j=i;j>0;j--){
           cout<< j%2 << " ";
        }
        cout<<endl;
        
    }
}