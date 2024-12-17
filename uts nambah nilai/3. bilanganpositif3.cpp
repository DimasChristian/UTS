#include <iostream>
using namespace std;

int main() {
    int N, jumlah = 0;

    cout << "Masukkan bilangan bulat positif N: ";
    cin >> N;

    while (N <= 0) {
        cout << "Bilangan harus positif. Ulangi: ";
        cin >> N;
    }

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            jumlah += i;
        }
    }

    cout << "Jumlah bilangan genap dari 1 hingga " << N << ": " << jumlah << endl;

    return 0;
}


