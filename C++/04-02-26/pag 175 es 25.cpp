#include <iostream>
using namespace std;

int main() {
    long long guadagnoOggi = 10;
    long long totale = 0;

    cout << "Calcolo stipendio dopo 22 giorni (raddoppia ogni giorno)." << endl;

    for (int giorno = 1; giorno <= 22; giorno++) {
        totale += guadagnoOggi;
        cout << "Giorno " << giorno << ": guadagna " << guadagnoOggi << " euro." << endl;
        guadagnoOggi = guadagnoOggi * 2;
    }

    cout << "Stipendio totale dopo 22 giorni: " << totale << " euro." << endl;
}