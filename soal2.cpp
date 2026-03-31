#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int x, xx, digit, sum;
    string neon;

    cout << "INPUT  : "; cin >> x;
    xx = pow(x, 2); //x^2
    sum = 0;
    while (xx > 0) {
        digit = xx % 10;
        sum += digit;
        xx = xx / 10;
    }
    if (sum == x) neon = "ANGKA NEON";
    else neon = "BUKAN ANGKA NEON";
    cout << "OUTPUT : " << neon; 
    return 0;
}
