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
            if (j==i)
            {
                matrice[i][j]=1;
            }
            else
            {
                matrice[i][j]=0;
            }

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
}