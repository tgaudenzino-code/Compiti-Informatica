#include <iostream>
#include <string>
using namespace std;

/*
  Memorizza N esami (max 30). Cerca un esame
  e stampa il voto se presente.
*/

int main()
{
    int n;
    cin>>n;
    string nomi[30];
    int voti[30];
    for(int i=0;i<n;i++) cin>>nomi[i]>>voti[i];
    string cerca;
    cout<<"Esame da cercare: ";
    cin>>cerca;
    bool trovato=false;
    for(int i=0;i<n;i++){
        if(nomi[i]==cerca){
            cout<<"Voto: "<<voti[i];
            trovato=true;
        }
    }
    if(!trovato) cout<<"Esame non presente";
}