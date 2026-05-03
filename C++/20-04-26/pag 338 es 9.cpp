#include <iostream>
#include <vector>
using namespace std;

/*
  Date due matrici A e B, determina
  e stampa la matrice somma.
*/

int main()
{
    int r,c;
    cout<<"Inserisci righe e colonne: ";
    cin>>r>>c;
    vector<vector<int>> A(r,vector<int>(c));
    vector<vector<int>> B(r,vector<int>(c));
    vector<vector<int>> S(r,vector<int>(c));
    //Caricamento matrici
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
            cout<<"B["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
            S[i][j]=A[i][j]+B[i][j]; //Calcolo somma
        }
    }
    //Stampa somma
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<S[i][j]<<" ";
        }
        cout<<"\n";
    }
}