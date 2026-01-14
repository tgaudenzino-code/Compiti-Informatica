#include <iostream>
using namespace std;
int main()
{
    int p;
    int n;
    int n1;
    int n2;
    cout<<"inserisci quante coppie di numeri vuoi controllare ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cout<<"inserisci coppia: ";
        cin>>n1>>n2;
        if (n1==n2)
        {
            p++;
        }
    }
    cout<<"numero di volte numeri uguali: ";
    cout<<p;
}