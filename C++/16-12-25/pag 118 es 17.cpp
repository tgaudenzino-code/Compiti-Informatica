#include <iostream>
using namespace std;
void Guadagno (int e)
{
    if (e<=200)
    {
        cout<<" e ha guadagnato: "<<e*0.10;
    }
    else if (e>200 && e<300)
    {
        cout<<" e ha guadagnato: "<<e*0.20;
    }
    else
    {
        cout<<" e ha guadagnato: "<<e*0.30;
    }
}
int main() 
{
    int q1,q2,q3;
    cout<<"inserisci il numero di copie vendute per ogni quotidiano"<<"\n";
    cout<<"La stampa: ";
    cin>>q1;
    cout<<"Il sole 24 ore: ";
    cin>>q2;
    cout<<"Il fatto quotidiano: ";
    cin>>q3;
    cout<<"Il quotidiano più venduto è: ";
    if (q1>q2 && q1>q3)
    {
        cout<<"La stampa"<<"\n";
        Guadagno(q1);
    }
    else if (q2>q1 && q2>q3)
    {
        cout<<"Il sole 24 ore";
        Guadagno(q2);
    }
    else
    {
        cout<<"Il fatto quotidiano";
        Guadagno(q3);
    }
    
}