#include <iostream>
using namespace std;

int main() {
    int a, b;
    int prodotto = 0;

    cout << "Calcolo il prodotto (A * B) usando solo somme." << endl;
    cout << "Inserisci il primo numero A: ";
    cin >> a;
    cout << "Inserisci il secondo numero B: ";
    cin >> b;

    for (int i = 0; i < b; i++) {
        prodotto = prodotto + a;
    }

    cout << "Il prodotto di " << a << " per " << b << " e': " << prodotto << endl;

}