#include <iostream>
using namespace std;
int main()
{
    int a,b;
    do
    {
        cout<<"inserisci il valore minimo ";
        cin>>a;
        cout<<"inserisci il valore massimo ";
        cin>>b;
    }
    while (a>=b);
    srand(time(0));
    int randomnum;
   do
   {
       randomnum=rand();
       cout<<randomnum<<" ";
   }
    while (randomnum<b && randomnum>a);
}