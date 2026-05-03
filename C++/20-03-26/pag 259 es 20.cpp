#include <iostream>
#include <cmath> //Per usare abs() per lo scostamento
using namespace std;

/*
  Carica le temperature di un mese in un vettore.
  Calcola e stampa media, giorno con temp minima,
  giorno con temp massima e giorno con maggior scostamento.
*/

void Esercizio20() {
    int giorni;
    cout<<"Quanti giorni ha il mese? ";
    cin>>giorni;

    float temp[giorni];
    float somma=0;

    //Caricamento e calcolo somma per la media
    for(int i=0; i<giorni; i++){
        cout<<"Temperatura giorno "<<i+1<<": ";
        cin>>temp[i];
        somma=somma+temp[i];
    }

    float media=somma/giorni;
    float t_min=temp[0];
    float t_max=temp[0];
    int g_min=1, g_max=1, g_scost=1;
    float max_scostamento=abs(temp[0]-media);

    //Ricerca minima, massima e maggior scostamento
    for(int i=1; i<giorni; i++){
        if(temp[i]<t_min){
            t_min=temp[i];
            g_min=i+1;
        }
        if(temp[i]>t_max){
            t_max=temp[i];
            g_max=i+1;
        }

        float scostamento=abs(temp[i]-media);
        if(scostamento>max_scostamento){
            max_scostamento=scostamento;
            g_scost=i+1;
        }
    }

    //Stampe finali
    cout<<"Media del periodo: "<<media<<"\n";
    cout<<"Giorno temperatura minima: "<<g_min<<"\n";
    cout<<"Giorno temperatura massima: "<<g_max<<"\n";
    cout<<"Giorno maggior scostamento: "<<g_scost<<"\n";
}