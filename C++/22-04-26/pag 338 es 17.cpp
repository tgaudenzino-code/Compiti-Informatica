#include <iostream>
using namespace std;

/*
  Stampa max righe, min colonne,
  massimo e minimo globale.
*/

int main()
{
    int r,c;
    cin>>r>>c;
    int m[r][c];
    int gMax=-9999, gMin=9999;
    for(int i=0;i<r;i++){
        int rMax=-9999;
        for(int j=0;j<c;j++){
            cin>>m[i][j];
            if(m[i][j]>rMax) rMax=m[i][j];
            if(m[i][j]>gMax) gMax=m[i][j];
            if(m[i][j]<gMin) gMin=m[i][j];
        }
        cout<<"Max riga "<<i<<": "<<rMax<<"\n";
    }
    for(int j=0;j<c;j++){
        int cMin=9999;
        for(int i=0;i<r;i++){
            if(m[i][j]<cMin) cMin=m[i][j];
        }
        cout<<"Min colonna "<<j<<": "<<cMin<<"\n";
    }
    cout<<"Globali - Max: "<<gMax<<" Min: "<<gMin;
}