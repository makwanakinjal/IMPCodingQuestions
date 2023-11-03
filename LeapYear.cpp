#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

 if(n%400==0 && n%100==0 && n%4==0)
    cout<<"This is leap year"<<endl;
 else if(n%400!=0 && n%100!=0 && n%4==0){
        cout<< "This is Leap Year"<<endl;
    }
    else{
        cout<<"This is not Leap Year"<< endl;
    }
}