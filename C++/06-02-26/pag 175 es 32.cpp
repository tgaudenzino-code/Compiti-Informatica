#include <iostream>
using namespace std;

int main() {
    int prec, curr;
    int diff;
    bool costante = true;
    int conteggio = 0;

    cout << "Inserisci sequenza di numeri (999 per terminare)." << endl;

    cout << "Inserisci numero: ";
    cin >> prec;
    if (prec == 999) return 0;
    conteggio++;

    cout << "Inserisci numero: ";
    cin >> curr;
    if (curr == 999) return 0;
    conteggio++;

    diff = curr - prec;
    prec = curr;

    while (true) {
        cout << "Inserisci numero: ";
        cin >> curr;
        if (curr == 999) break;

        conteggio++;
        if (curr - prec != diff) {
            costante = false;
        }
        prec = curr;
    }

    if (costante) cout << "La differenza e' costante." << endl;
    else cout << "La differenza NON e' costante." << endl;

    cout << "Numeri inseriti: " << conteggio << endl;
}