#include <iostream>
using namespace std;

/*
  Dato un vettore di N numeri interi, genera due nuovi vettori:
  uno con i soli numeri pari e uno con i soli numeri dispari,
  infine li stampa.
*/

void Esercizio16() {
    int n;
    cout<<"Inserisci N: ";
    cin>>n;

    int v[n], pari[n], dispari[n];
    int p=0, d=0;

    //Caricamento vettore principale e smistamento
    for(int i=0; i<n; i++){
        cout<<"Inserisci numero: ";
        cin>>v[i];
        if(v[i]%2==0){
            pari[p]=v[i];
            p++;
        }else{
            dispari[d]=v[i];
            d++;
        }
    }

    //Stampa vettore pari
    cout<<"Vettore pari: ";
    for(int i=0; i<p; i++){
        cout<<pari[i]<<" ";
    }
    cout<<"\n";

    //Stampa vettore dispari
    cout<<"Vettore dispari: ";
    for(int i=0; i<d; i++){
        cout<<dispari[i]<<" ";
    }
    cout<<"\n";
}