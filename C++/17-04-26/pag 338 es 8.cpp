#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"inserisci n: ";
    cin>>n;
    vector<vector<int>> matrice(n,vector<int>(n));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            matrice[i][j]=i+j;
        }
    }
    vector<vector<int>> mattia(n,vector<int>(n));
    for (int x=0;x<n;x++)
    {
        for (int y=0;y<n;y++)
        {
            mattia[x][y]=x+y;
        }
    }
    vector<vector<int>> somma(n,vector<int>(n));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            somma[i][j]=mattia[i][j]+matrice[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<matrice[i][j]<<" ";
        }
        cout<<"\n";
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<mattia[i][j]<<" ";
        }
        cout<<"\n";
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<somma[i][j]<<" ";
        }
        cout<<"\n";
    }
}