#include <iostream>
using namespace std;
int main()
{
    int cappio=1;
    int n;
    cout<<"inserisci la lunghezza della sequenza";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cappio=cappio*3;
        cout<<cappio<<"\n";
    }

}