#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
  Dati nomi e voti (0=assente). Calcola media (senza 0),
  studente migliore, elenco insufficienti e % assenze.
*/

int main()
{
    int n;
    cin>>n;
    vector<string> nomi(n);
    vector<int> voti(n);
    float sommaVoti=0;
    int presenti=0, assenti=0, indiceMax=0;
    for(int i=0;i<n;i++){
        cin>>nomi[i]>>voti[i];
        if(voti[i]==0) assenti++;
        else {
            sommaVoti+=voti[i];
            presenti++;
            if(voti[i]>voti[indiceMax]) indiceMax=i;
        }
    }
    cout<<"Media: "<<sommaVoti/presenti<<"\n";
    cout<<"Migliore: "<<nomi[indiceMax]<<"\n";
    cout<<"Insufficienti: ";
    for(int i=0;i<n;i++) if(voti[i]>0 && voti[i]<6) cout<<nomi[i]<<" ";
    cout<<"\n% Assenti: "<<(float)assenti/n*100<<"%";
}