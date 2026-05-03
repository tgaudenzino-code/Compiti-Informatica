#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
  Carica 100 componenti random tra 1 e 100 in un vettore.
  In un secondo vettore di 10 conta le frequenze per decine:
  <10, 10-19, 20-29... e lo stampa alla fine.
*/

void Esercizio17() {
    int v1[100];
    int v2[10] = {0}; //Inizializza tutto a 0
    srand(time(0));

    //Caricamento random e calcolo frequenze
    for(int i=0; i<100; i++){
        v1[i]=rand()%100+1;
        int indice=v1[i]/10;

        //Se esce 100 esatto lo mettiamo nell'ultimo scaglione (90-100)
        if(indice==10){
            indice=9;
        }
        v2[indice]++;
    }

    //Stampa del vettore frequenze
    cout<<"Frequenze per scaglioni:\n";
    for(int i=0; i<10; i++){
        cout<<"Scaglione "<<i<<": "<<v2[i]<<"\n";
    }
}