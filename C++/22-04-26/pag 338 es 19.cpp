#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
  Tabella iscritti con Acconto e Saldo.
  Aggiorna pagamenti e stampa chi deve ancora pagare.
*/

struct Iscritto {
    string nome;
    float acconto;
    float saldo;
};

int main()
{
    int n;
    cin>>n;
    vector<Iscritto> iscritti(n);
    for(int i=0;i<n;i++) cin>>iscritti[i].nome>>iscritti[i].acconto>>iscritti[i].saldo;
    //Aggiornamento
    string chi;
    float quanto;
    cout<<"Pagamento di: ";
    cin>>chi>>quanto;
    for(int i=0;i<n;i++){
        if(iscritti[i].nome==chi) iscritti[i].saldo-=quanto;
    }
    cout<<"Devono ancora: ";
    for(int i=0;i<n;i++) if(iscritti[i].saldo>0) cout<<iscritti[i].nome<<" ";
}