#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    system ("cls");
    int x, digit = 1;
    cout << "INPUT  : "; cin >> x;

    cout << "OUTPUT : "; 
    if (x <= 0) cout << "Maaf, nilai mu <= 0, jadi tidak valid";
    if (x > 0) {
        for (int j = 0; j < x; j++) {
            for (int i = 0; i <= j; i++) {
                if (i == 0 || i == j) digit = 1;
                else digit = digit * (j - i + 1) / (i);
                cout << setw(4) << digit;
            }
            cout << endl;
            cout << "         ";
        }
    }
    return 0;
}
