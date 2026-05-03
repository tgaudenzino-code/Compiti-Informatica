#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
  Memorizza nomi e prezzi di 10 bevande.
  Stampa ordinata per nome e per prezzo.
*/

int main()
{
    string nomi[10];
    float prezzi[10];
    for(int i=0;i<10;i++) cin>>nomi[i]>>prezzi[i];
    //Ordinamento per nome (Bubble Sort)
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(nomi[j]>nomi[j+1]){
                swap(nomi[j],nomi[j+1]);
                swap(prezzi[j],prezzi[j+1]);
            }
        }
    }
    cout<<"Per nome:\n";
    for(int i=0;i<10;i++) cout<<nomi[i]<<" "<<prezzi[i]<<"\n";
}