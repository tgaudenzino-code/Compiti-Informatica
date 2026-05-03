#include <iostream>
using namespace std;

/*
  Verifica se in una matrice 4x5 ogni cella
  e' uguale alla somma delle precedenti sulla riga.
*/

int main()
{
    int m[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++) cin>>m[i][j];
    }
    for(int i=0;i<4;i++){
        int sommaPrecedenti=m[i][0];
        for(int j=1;j<5;j++){
            if(m[i][j]==sommaPrecedenti) cout<<"R"<<i<<" C"<<j<<" OK\n";
            sommaPrecedenti+=m[i][j];
        }
    }
}