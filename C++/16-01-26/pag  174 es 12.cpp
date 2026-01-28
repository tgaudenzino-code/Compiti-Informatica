#include <iostream>
using namespace std;
int main()
{
    int sotto=0,sopra=0,uguale=0;
    int o;
    int n;
    cin>>n;
    int k;
    cin>>k;
    for (int i=0;i<n;i++)
    {
        cout<<"inserisci un numero (grazie) ";
        cin>>o;
        if (o<k)
        {
            sotto++;
        }
        else if (o>k)
        {
            sopra++;
        }
        else
        {
            uguale++;
        }

    }
    cout<<sotto<<" "<<uguale<<" "<<sopra;
}