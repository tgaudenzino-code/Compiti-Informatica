#include <iostream>
using namespace std;
int main()
{
    int codicealto=0;
    int prezzoalto=0;
    int codice;
    int prezzo;
    do
    {
        cout<<"inserisci il codice ";
        cin>>codice;
        if (codice!=0)
        {
            cout<<"inserisci il prezzo ";
            cin>>prezzo;
            if (prezzoalto<prezzo)
            {
                prezzoalto=prezzo;
                codicealto=codice;
            }
        }
    }
    while (codice!=0);
    cout<<"ecco il prezzo "<<prezzoalto<<" ";
    cout<<"ecco il codice "<<codicealto<<" ";

}