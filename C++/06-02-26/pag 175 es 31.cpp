#include <iostream>
#include <string>
using namespace std;

int main() {
    int giorniMese;
    int copie, maxCopie = -1;
    int giornoMax = 0;
    int sommaTotale = 0, sommaDomeniche = 0, contaDomeniche = 0;
    string nomeGiorno;

    cout << "Di quanti giorni vuoi inserire i dati? ";
    cin >> giorniMese;

    for (int i = 1; i <= giorniMese; i++) {
        cout << "Giorno " << i << " (lunedi, martedi...): ";
        cin >> nomeGiorno;
        cout << "Copie vendute: ";
        cin >> copie;

        sommaTotale += copie;

        if (copie > maxCopie) {
            maxCopie = copie;
            giornoMax = i;
        }

        if (nomeGiorno == "domenica") {
            sommaDomeniche += copie;
            contaDomeniche++;
        }
    }

    cout << "Giorno vendita massima: Giorno " << giornoMax << endl;
    cout << "Media giornaliera: " << (float)sommaTotale / giorniMese << endl;
    if (contaDomeniche > 0)
        cout << "Media vendite domenicali: " << (float)sommaDomeniche / contaDomeniche << endl;
    else
        cout << "Nessuna domenica inserita." << endl;
}