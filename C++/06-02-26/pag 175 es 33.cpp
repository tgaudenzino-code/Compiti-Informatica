#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    string nomeRegione;
    int abitantiProvincia;
    long long abitantiRegione, abitantiTotali = 0;

    cout << "Inserisci il numero di Regioni N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Nome Regione " << i << ": ";
        cin >> nomeRegione;
        cout << "Numero province per " << nomeRegione << ": ";
        cin >> M;

        abitantiRegione = 0;
        for (int j = 1; j <= M; j++) {
            cout << "Abitanti provincia " << j << ": ";
            cin >> abitantiProvincia;
            abitantiRegione += abitantiProvincia;
        }

        cout << "Abitanti totali in " << nomeRegione << ": " << abitantiRegione << endl;
        abitantiTotali += abitantiRegione;
    }

    cout << "---" << endl;
    cout << "Abitanti totali di tutte le regioni considerate: " << abitantiTotali << endl;
}