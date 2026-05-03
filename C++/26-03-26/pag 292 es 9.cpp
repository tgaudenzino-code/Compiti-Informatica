#include <iostream>
#include <string>
using namespace std;

/*
  Ordinamento città per abitanti, inserimento,
  eliminazione e copia posizioni dispari.
*/

int main() {
    int n;
    cout<<"N citta: ";
    cin>>n;
    string citta[n+1];
    int ab[n+1];
    for(int i=0; i<n; i++){
        cin>>citta[i]>>ab[i];
    }
    //Ordinamento crescente abitanti
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(ab[j]>ab[j+1]){
                swap(ab[j], ab[j+1]);
                swap(citta[j], citta[j+1]);
            }
        }
    }
    //Elimina citta con meno abitanti (la prima)
    for(int i=0; i<n-1; i++){
        citta[i]=citta[i+1];
        ab[i]=ab[i+1];
    }
    n--;
    //Copia posizioni dispari in CITTA1
    string citta1[n];
    int n1=0;
    for(int i=1; i<n; i+=2){
        citta1[n1]=citta[i];
        n1++;
    }
    for(int i=0; i<n1; i++) cout<<citta1[i]<<" ";
    return 0;
}