#include <iostream>
#include <string>
using namespace std;

/*
  Crea la struttura libro, memorizza 10 libri
  e calcola costo medio per pagina e il libro piu caro.
*/

struct Libro {
    int codice;
    int pagine;
    float costo;
};

int main()
{
    Libro v[10];
    float sommaCosti=0;
    int sommaPagine=0;
    int indiceCaro=0;
    for(int i=0;i<10;i++){
        cin>>v[i].codice>>v[i].pagine>>v[i].costo;
        sommaCosti+=v[i].costo;
        sommaPagine+=v[i].pagine;
        if(v[i].costo>v[indiceCaro].costo) indiceCaro=i;
    }
    cout<<"Costo medio per pagina: "<<sommaCosti/sommaPagine<<"\n";
    cout<<"Codice libro piu caro: "<<v[indiceCaro].codice;
}