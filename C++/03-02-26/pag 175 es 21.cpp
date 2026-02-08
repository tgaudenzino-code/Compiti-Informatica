#include <iostream>
using namespace std;

int main() {
    int a, b;
    int conteggio = 0;
    bool continua = true;

    cout << "Inserisci coppie di numeri." << endl;

    while (continua) {
        cout << "Inserisci il primo numero: ";
        cin >> a;
        cout << "Inserisci il secondo numero: ";
        cin >> b;

        conteggio++;

        if (a == b) {
            cout << "Terminato perche' i numeri sono uguali." << endl;
            continua = false;
        } else if (b > a) {
            cout << "Terminato perche' il secondo numero e' maggiore del primo." << endl;
            continua = false;
        }
    }

    cout << "Hai inserito " << conteggio << " coppie." << endl;
}