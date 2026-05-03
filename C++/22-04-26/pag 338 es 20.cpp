#include <iostream>
#include <string>
using namespace std;

/*
  Rete di 20 agenti. Fatturato mensile in matrice.
  Uso di menu e procedure per statistiche.
*/

string nomi[20];
float fatt[20][12];

void fatturatoAnnuo(){
    for(int i=0;i<20;i++){
        float tot=0;
        for(int j=0;j<12;j++) tot+=fatt[i][j];
        cout<<nomi[i]<<" Tot: "<<tot<<"\n";
    }
}

void topAgente(){
    int best=0;
    float maxF=0;
    for(int i=0;i<20;i++){
        float tot=0;
        for(int j=0;j<12;j++) tot+=fatt[i][j];
        if(tot>maxF){ maxF=tot; best=i; }
    }
    cout<<"Top: "<<nomi[best];
}

int main()
{
    //Caricamento finto
    for(int i=0;i<20;i++) nomi[i]="Agente"+to_string(i);
    int scelta;
    do {
        cout<<"\n1.Annuo 2.Migliore 0.Esci: ";
        cin>>scelta;
        if(scelta==1) fatturatoAnnuo();
        if(scelta==2) topAgente();
    } while(scelta!=0);
}