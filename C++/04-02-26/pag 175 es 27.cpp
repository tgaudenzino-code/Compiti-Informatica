#include <iostream>
using namespace std;

int main() {
    int N;
    long long a = 1, b = 1, c;

    cout << "Quale termine della serie di Fibonacci vuoi calcolare? ";
    cin >> N;

    if (N == 1 || N == 2) {
        cout << "Il termine numero " << N << " e': 1" << endl;
    } else {
        for (int i = 3; i <= N; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "Il termine numero " << N << " e': " << b << endl;
    }
}