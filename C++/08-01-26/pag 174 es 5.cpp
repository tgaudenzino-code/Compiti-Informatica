#include <iostream>
using namespace std;
int main()
{
    int somma=0;
    int x,y;
    cout<<"inserisci un numero da controllare ";
    cin>>x;
    cout<<"inserisci il numero di numeri successivi da controllare ";
    cin>>y;
    for (int i=0;i<y;i++)
    {
        somma=somma+(x+i+1)*(x+i+1);
    }
    cout<<somma;
}