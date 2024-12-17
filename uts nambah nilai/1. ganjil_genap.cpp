#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Masukkan Angka: ";
    cin >> n;


    if (n % 2 == 0) {
        cout << n << " adalah angka genap.\n";
    } else {
        cout << n << " adalah angka ganjil.\n";
    }

return 0;
}
