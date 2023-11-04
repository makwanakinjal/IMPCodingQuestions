#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = n-i; j < n; j++) {
            cout << char(ch+j);
        }
        cout << endl;
    }

    return 0;
}
