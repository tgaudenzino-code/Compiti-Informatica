#include <iostream>
using namespace std;
int main()
{
    int no=0;
    int ni=0;
    int o;
    cin>>o;
    for (int i=0;i<o;i++)
    {
        int n;
        cin>>n;

        if (i==0 || no<n)
        {
            no=n;
        }
        if (i==0 || ni>n)
        {
            ni=n;
        }
    }
    cout<<no<<" "<<ni;
}