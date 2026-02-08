#include <iostream>
using namespace std;

int main() {
    int N;
    long long a = 3;

    cout << "Inserisci N (>0) per la serie: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        a = 2 * a + i;
    }

    cout << "Il termine " << N << " della serie vale: " << a << endl;
}