#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
  Matrice 4x4 random (0-1). Verifica se ogni riga
  ha un numero di '1' superiore di uno alla riga precedente.
*/

int main()
{
    int m[4][4];
    srand(time(0));
    int conteggi[4]={0};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            m[i][j]=rand()%2;
            if(m[i][j]==1) conteggi[i]++;
        }
    }
    bool ok=true;
    for(int i=1;i<4;i++){
        if(conteggi[i]!=conteggi[i-1]+1) ok=false;
    }
    if(ok) cout<<"Condizione verificata";
    else cout<<"Condizione non verificata";
}