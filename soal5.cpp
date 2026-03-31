#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int x[2], factor;

    cout << "INPUT  : ";
    for (int i = 0; i < 2; i++) {
        cin >> x[i]; fabs(x[i]); //jadikan nilai input menjadi absolut
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j <= x[i]; j++) {
            if (x[0] % j == 0 && x[1] % j == 0) factor = j;
        }
    }

    cout << "OUTPUT : "; 
    if (x[0] == 0 && x[1] == 0) cout << "Maaf, kedua nilai mu 0, jadi tidak terdefinisi";
    else {
        cout << factor;
    }
    return 0;
}
