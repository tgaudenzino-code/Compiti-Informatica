#include <iostream>
using namespace std;

/*
  Memorizza in un vettore i prezzi di listino di N prodotti.
  Aumenta i prezzi < 5 euro del 10% e gli altri del 6%.
*/

void Esercizio18() {
    int n;
    cout<<"Numero di prodotti: ";
    cin>>n;

    float prezzi[n];

    //Caricamento dei prezzi
    for(int i=0; i<n; i++){
        cout<<"Inserisci prezzo "<<i+1<<": ";
        cin>>prezzi[i];
    }

    //Aumento dei prezzi e stampa
    cout<<"Nuovi prezzi:\n";
    for(int i=0; i<n; i++){
        if(prezzi[i]<5){
            prezzi[i]=prezzi[i]*1.10;
        }else{
            prezzi[i]=prezzi[i]*1.06;
        }
        cout<<prezzi[i]<<"\n";
    }
}