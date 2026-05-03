#include <iostream>
using namespace std;

/*
  Inserisce un numero in un vettore già ordinato
  mantenendo l'ordine crescente.
*/

int main() {
    int n;
    cout<<"Quanti numeri? ";
    cin>>n;
    int v[n+1];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int num;
    cout<<"Numero da inserire: ";
    cin>>num;
    //Spostamento elementi a destra
    int i=n-1;
    while(i>=0 && v[i]>num){
        v[i+1]=v[i];
        i--;
    }
    v[i+1]=num;
    n++;
    //Stampa finale
    for(int j=0; j<n; j++){
        cout<<v[j]<<" ";
    }
    return 0;
}