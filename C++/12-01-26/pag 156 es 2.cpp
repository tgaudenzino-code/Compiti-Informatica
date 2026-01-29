#include <iostream>
using namespace std;
int main()
{
    int max;
    cin>>max;
    for (int c=0;c<4;c++)
    {
        int num;
        cin>>num;
        if (num>max)
        {
            max=num;
        }

    }
    cout<<max;
}