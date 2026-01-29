#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> voti = {10,3,2,5,6,7};

    int max=-1, min=11;

    for (int i = 1; i < voti.size(); i++)
    {
        if (voti[i] > max && voti[i] > 5)
        {
            max = voti[i];
            continue;
        } else if (voti[i] < min && voti[i] < 6)
        {
            min = voti[i];
        }
    }

    cout << "Questa è la sufficienza maggiore: " << max << "\n";
    cout << "Questa è la sufficienza minore: " << min << "\n";
}
