#include <iostream>
using namespace std;

/*
  In una matrice 4x4 trova la riga o
  la colonna con la somma piu alta.
*/

int main()
{
    int m[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++) cin>>m[i][j];
    }
    int maxSomma=-9999, indice=0;
    bool riga=true;
    //Controllo righe
    for(int i=0;i<4;i++){
        int s=0;
        for(int j=0;j<4;j++) s+=m[i][j];
        if(s>maxSomma){ maxSomma=s; indice=i; }
    }
    //Controllo colonne
    for(int j=0;j<4;j++){
        int s=0;
        for(int i=0;i<4;i++) s+=m[i][j];
        if(s>maxSomma){ maxSomma=s; indice=j; riga=false; }
    }
    if(riga) cout<<"Riga "<<indice<<" con somma "<<maxSomma;
    else cout<<"Colonna "<<indice<<" con somma "<<maxSomma;
}