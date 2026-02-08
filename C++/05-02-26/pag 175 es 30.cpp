#include <iostream>
using namespace std;

int main() {
    int N;
    int valore = 1;

    cout << "Inserisci un numero N: ";
    cin >> N;

    while (valore <= N) {
        valore = valore * 2;
    }

    cout << "Il primo termine maggiore di " << N << " e': " << valore << endl;
}