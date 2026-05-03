#include <iostream>
using namespace std;
int main()
{
    int b;
    int matrice[10][10];
    srand(time(0));
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            matrice[i][j]=rand()%10;
            if (matrice[i][j]==0)
            {
                b++;
            }
        }
    }
    for (int i=0;i<10;i++)
    {

        for (int j=0;j<10;j++)
        {
            cout<<matrice[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n"<<b;
}

