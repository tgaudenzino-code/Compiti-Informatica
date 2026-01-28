#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    for (int i=0;i<n;i++)
    {
        for (int k=0;k<m;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}