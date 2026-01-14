#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    int r;
    int rmio;
    int rmiod;
    cout<<"inserisci i numeri da sommare ";
    cin>>n1>>n2;
    cout<<"inserisci il risultato da te ottenuto ";
    cin>>rmio;
    r=n1+n2;
    if (rmio==r)
    {
        cout<<"bravo, hai indovinato al primo tentativo";
    }
    else
    {
        cout<<"hai sbagliato, ritenta sarai più fortunato ";
        cin>>rmiod;
        if (rmiod==r)
        {
            cout<<"bravino dai";
        }
        else
        {
            cout<<"...hai sbagliato...di nuovo...";
        }
    }

}

