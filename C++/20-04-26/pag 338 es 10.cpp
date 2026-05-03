#include <iostream>
#include <vector>
using namespace std;

/*
  Inserita una matrice, scambia
  le righe pari con quelle dispari.
*/

int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> m(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cin>>m[i][j];
    }
    //Scambio righe
    for(int i=0;i<r-1;i+=2){
        for(int j=0;j<c;j++){
            int temp=m[i][j];
            m[i][j]=m[i+1][j];
            m[i+1][j]=temp;
        }
    }
    //Stampa
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout<<m[i][j]<<" ";
        cout<<"\n";
    }
}