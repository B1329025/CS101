#include <iostream>
using namespace std;

int main() {
    int rows = 7;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows + i - 1; j++) {
            if (j <= rows - i) {
                cout << " "; 
            } else if ((j - (rows - i)) % 2 == 1) {
                cout << i; 
            } else {
                cout << " "; 
            }
        }
        cout <<"\n"; 
    }

    return 0;
}
