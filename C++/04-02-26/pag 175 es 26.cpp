#include <iostream>
using namespace std;

int main() {
    int N;
    int somma = 0;
    int dispari = 1;

    cout << "Inserisci un numero N per calcolarne il quadrato: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        somma += dispari;
        dispari += 2;
    }

    cout << "Il quadrato di " << N << " e': " << somma << endl;
}