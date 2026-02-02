#include <iostream>
using namespace std;
int main()
{
    float spesamin=0;
    unsigned int tesseramin;
    float spesatot=0;
    cout<<"inserisci il numero di clienti ";
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        unsigned int tessera;
        cout<<"inserisci il numero della tessera ";
        cin>>tessera;
        float spesa;
        cout<<"inserisci la spesa effettuata ";
        cin>>spesa;
        spesatot=spesatot+spesa;
        if (spesamin>spesa || i==0)
        {
            spesamin=spesa;
            tesseramin=tessera;
        }

    }
    cout<<"la spesa totale è "<<spesatot<<"\n";
    cout<<"la tessera con la spesa minore è "<<tesseramin;
}