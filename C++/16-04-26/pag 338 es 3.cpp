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
        for (int i=0;i<n;i++)
        {

            for (int j=0;j<n;j++)
            {
                cout<<matrice[i][j]<<" ";
            }
            cout<<"\n";
        }
}