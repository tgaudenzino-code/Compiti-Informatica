#include <iostream>
using namespace std;
int main() {
    cout<<"inserisci il numero di partenza ";
    int a;
    cin>>a;
    cout<<"adesso quello finale ";
    int b;
    cin>>b;
    int c=0;
       for (int i=a;i<=b;i++)
    {
        if (i%2==0)
        {
            cout<<i<<" ";
            c++;
        }
    }
    cout<<"\n"<<"ecco il conteggio dei numeri pari: ";
    cout<<c;
}