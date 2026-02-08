#include <iostream>
using namespace std;

int main() {
    int X, Y;
    long long risultato = 1;

    cout << "Calcolo X elevato alla Y." << endl;
    cout << "Inserisci la base X: ";
    cin >> X;
    cout << "Inserisci l'esponente Y: ";
    cin >> Y;

    for (int i = 0; i < Y; i++) {
        risultato = risultato * X;
    }

    cout << X << " elevato alla " << Y << " fa: " << risultato << endl;
}