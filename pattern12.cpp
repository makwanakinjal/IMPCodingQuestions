#include<iostream>
using namespace std;

int main(){
   char currentChar = 'a';

    for (int i = 1; i <= 6; i++) {
        for (int j = 0; j < i; j++) {
            if (j % 2 == 0) {
                cout << currentChar++;
            } else {
                cout << char(currentChar - 'a' + 'A');
                currentChar++;
            }
        }
        cout << endl;
    }
    
    
}