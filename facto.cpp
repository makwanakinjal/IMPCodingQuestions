#include<iostream>
using namespace std;

// int facto(int n){
//     if(n==1 || n==0){
//         return 1;
//     }

//     return n * facto(n-1);
// }
int main(){
    int n;
     cin>> n;

    //  facto(n);
    int f = 1;
    for(int i=1;i<=n;i++){
        //  f = f*(n-i); 
        f = f*i;
    }
      cout<< f << " ";
}