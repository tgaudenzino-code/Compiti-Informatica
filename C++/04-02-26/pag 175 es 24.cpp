#include <iostream>
using namespace std;

int main() {
    int N;
    int iscritti, votanti, nulle, bianche;
    int totIscritti = 0, totVotanti = 0, totNulle = 0, totBianche = 0;

    cout << "Quanti seggi elettorali dobbiamo analizzare? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "--- Seggio numero " << i + 1 << " ---" << endl;
        cout << "Numero iscritti: ";
        cin >> iscritti;
        cout << "Numero votanti: ";
        cin >> votanti;
        cout << "Numero schede nulle: ";
        cin >> nulle;
        cout << "Numero schede bianche: ";
        cin >> bianche;

        totIscritti += iscritti;
        totVotanti += votanti;
        totNulle += nulle;
        totBianche += bianche;
    }

    cout << "--- STATISTICHE TOTALI ---" << endl;
    if (totIscritti > 0) {
        cout << "Percentuale votanti: " << ((float)totVotanti / totIscritti) * 100 << "%" << endl;
    }
    if (totVotanti > 0) {
        cout << "Percentuale schede bianche: " << ((float)totBianche / totVotanti) * 100 << "%" << endl;
        cout << "Percentuale schede nulle: " << ((float)totNulle / totVotanti) * 100 << "%" << endl;
    }
}