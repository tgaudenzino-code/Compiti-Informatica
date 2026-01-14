#include <iostream>
using namespace std;
int main()
{
    int prezzof;
    int nl;
    int settimane;
    cout<<"quante settimane vuoi soggiornare? una o due? ";
    cin>>settimane;
    cout<<"vuoi le lenzuola? 1=si 2=no ";
    cin>>nl;
    if (settimane==1)
    {
        prezzof=100+600;
    }
    else
    {
        prezzof=100+1100;
    }
    if (settimane==2 && nl==1)
    {
        prezzof=prezzof+20*2;
    }
    else if (settimane==1 && nl==1)
    {
        prezzof=prezzof+20;
    }
    cout<<prezzof;
}