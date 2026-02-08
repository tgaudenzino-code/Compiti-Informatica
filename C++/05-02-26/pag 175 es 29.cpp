#include <iostream>
using namespace std;

int main() {
    int N;
    float valore, somma = 0;
    float minVal, maxVal;

    cout << "Quante misurazioni vuoi inserire? ";
    cin >> N;

    cout << "Inserisci la misura 1: ";
    cin >> valore;
    minVal = valore;
    maxVal = valore;
    somma += valore;

    for (int i = 2; i <= N; i++) {
        cout << "Inserisci la misura " << i << ": ";
        cin >> valore;
        somma += valore;
        if (valore < minVal) minVal = valore;
        if (valore > maxVal) maxVal = valore;
    }

    float media = somma / N;
    float errAssoluto = (maxVal - minVal) / 2;
    float errRelativo = errAssoluto / media;
    float errPercentuale = errRelativo * 100;

    cout << "Errore Assoluto: " << errAssoluto << endl;
    cout << "Errore Relativo: " << errRelativo << endl;
    cout << "Errore Percentuale: " << errPercentuale << "%" << endl;
}