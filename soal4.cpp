#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int x; 
    char alphabet[] = 
    {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cout << "INPUT  : "; cin >> x;

    cout << "OUTPUT : "; 
    if (x <= 0) cout << "Maaf, nilai mu <= 0, jadi tidak valid";
    if (x > 0) {
        for (int j = 0; j < x; j++) {
            for (int i = 0; i <= j; i++) {
                cout << alphabet[j];
            }
            cout << endl;
            cout << "         ";
        }
    }
    return 0;
}
