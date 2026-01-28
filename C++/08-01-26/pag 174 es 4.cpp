#include <iostream>
using namespace std;
int main()
{
    int i;
    bool t= false;
    cout<<"inserisci il numero di numeri che vuoi inserire ";
    cin>>i;
    for (int k=0;k<i;k++)
    {
        int e;
        cout<<"inserisci il numero (divisibile per 7=stop) ";
        cin>>e;
        if (e%7==0)
        {
            t=true;
            cout<<k+1;
            break;
        }
    }
    if (!t)
    {
        cout<<"fallimento";
    }
}