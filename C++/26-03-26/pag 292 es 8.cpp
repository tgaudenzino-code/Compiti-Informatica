#include <iostream>
#include <string>
using namespace std;

/*
  Gestione prestiti e restituzioni libri
  tramite vettori paralleli.
*/

int main() {
    int n=3; //Esempio con 3 libri
    string tit[n]={"LibroA","LibroB","LibroC"};
    string aut[n]={"Autore1","Autore2","Autore1"};
    int copie[n]={2,0,5};
    //Gestione prestito
    string t_p;
    cout<<"Titolo prestito: ";
    cin>>t_p;
    for(int i=0; i<n; i++){
        if(tit[i]==t_p){
            if(copie[i]>0){
                copie[i]--;
                cout<<"Ok";
            }else{
                cout<<"Non disponibile";
            }
        }
    }
    //Ricerca per autore
    string a_r;
    cout<<"\nCerca autore: ";
    cin>>a_r;
    for(int i=0; i<n; i++){
        if(aut[i]==a_r) cout<<tit[i]<<" ";
    }
    return 0;
}