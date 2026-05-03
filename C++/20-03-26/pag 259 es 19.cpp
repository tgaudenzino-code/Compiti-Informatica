#include <iostream>
using namespace std;

/*
  Dati due vettori char V1(20) e V2(5), elimina da V1 gli elementi
  presenti anche in V2 sostituendoli con '*'.
*/

void Esercizio19() {
    char v1[20];
    char v2[5];

    //Caricamento V1
    cout<<"Inserisci i 20 caratteri di V1:\n";
    for(int i=0; i<20; i++){
        cin>>v1[i];
    }

    //Caricamento V2
    cout<<"Inserisci i 5 caratteri di V2:\n";
    for(int i=0; i<5; i++){
        cin>>v2[i];
    }

    //Confronto e sostituzione
    for(int i=0; i<20; i++){
        for(int j=0; j<5; j++){
            if(v1[i]==v2[j]){
                v1[i]='*';
            }
        }
    }

    //Stampa V1 modificato
    cout<<"V1 modificato:\n";
    for(int i=0; i<20; i++){
        cout<<v1[i];
    }
    cout<<"\n";
}