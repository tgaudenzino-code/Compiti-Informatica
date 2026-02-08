#include <iostream>
using namespace std;

int main() {
    int N, numero;
    int sommaDispari = 0, contaDispari = 0;
    int sommaPari = 0, contaPari = 0;
    int maxPositivo = 0;
    int minNegativo = 0;
    bool primoNegativo = true;

    cout << "Quanti numeri vuoi inserire in totale? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Inserisci il numero " << i + 1 << ": ";
        cin >> numero;

        if (numero % 2 == 0) {
            sommaPari += numero;
            contaPari++;
        } else {
            sommaDispari += numero;
            contaDispari++;
        }

        if (numero > 0) {
            if (numero > maxPositivo) maxPositivo = numero;
        } else if (numero < 0) {
            if (primoNegativo) {
                minNegativo = numero;
                primoNegativo = false;
            } else if (numero < minNegativo) {
                minNegativo = numero;
            }
        }
    }

    cout << "--- RISULTATI ---" << endl;
    if (contaDispari > 0) cout << "La media dei numeri dispari e': " << (float)sommaDispari / contaDispari << endl;
    if (contaPari > 0) cout << "La media dei numeri pari e': " << (float)sommaPari / contaPari << endl;

    cout << "Il numero positivo piu' grande e': " << maxPositivo << endl;
    if (!primoNegativo) cout << "Il numero negativo piu' piccolo e': " << minNegativo << endl;
    else cout << "Non hai inserito numeri negativi." << endl;

}