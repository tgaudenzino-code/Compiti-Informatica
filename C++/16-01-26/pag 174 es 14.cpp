#include <iostream>
using namespace std;
int main()
{
    int c=0;
    int caschi;
    int peso;
    int altezza;
    int k=20;
    int n;
    cout<<"inserisci la lunghezza della sequenza ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"scrivi il peso ";
        cin>>peso;
        cout<<"scrivi l'altezza ";
        cin>>altezza;
        caschi=peso/altezza;
        if (caschi>k)
        {
            c++;
        }
    }
    cout<<"i numeri maggiori di k sono: ";
    cout<<c;
}