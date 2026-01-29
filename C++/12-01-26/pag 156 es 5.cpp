#include <iostream>
using namespace std;
int main()
{
    int media;
    int controllo=0;
    int n;
    cout<<"quante coppie di numeri vuoi inserire? ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int n1,n2;
        cout<<"inserisci il primo numero della coppia ";
        cin>>n1;
        cout<<"inserisci il secondo numero della coppia ";
        cin>>n2;
        media=(n1+n2)/2;
        if (controllo<media)
        {
            controllo=media;
        }
    }
    cout<<"ecco la media piu alta tra le coppie di numeri che hai inserito ";
    cout<<controllo;
}