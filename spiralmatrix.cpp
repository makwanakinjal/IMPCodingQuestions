#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int count=0;
    int total = 9;

    int startingrow = 0;
    int startingcol=0;
    int endingrow=2;
    int endingcol=2;

while(count<total){
    // 1 st row:
    for(int i=startingcol; count< total && i<=endingcol;i++){
        cout << arr[startingrow][i]<<" ";
        count++;
    }
    startingrow++;
   // cout<<endl;

    // Last col:
    for(int i=startingrow;count< total && i<=endingrow;i++){
        cout << arr[i][endingcol]<<" ";
        count++;
    }
    endingcol--;
    //cout<<endl;

    //last row
    for(int i=endingcol;count< total && i>=startingcol;i--){
        cout << arr[endingrow][i]<<" ";
        count++;
    }
    endingrow--;
   // cout<<endl;

//statring col:
    for(int i=endingrow;count< total && i>=startingrow;i--){
        cout << arr[i][startingcol]<<" ";
        count++;
    }
    startingcol++;
   // cout<<endl;
}
}