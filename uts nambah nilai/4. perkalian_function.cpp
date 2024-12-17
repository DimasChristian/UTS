#include <iostream>
using namespace std;

int Perkalian(int a, int b){
    return a*b;
}

int main(){
    int angka1, angka2, hasil;

    cout << "Masukkan nilai yang akan dikali: ";
    cin >> angka1;
    cout << "Masukkan nilai kedua: ";
    cin >> angka2;

    hasil = Perkalian(angka1, angka2);

    cout << "Hasil kali dari " << angka1 << " dan " << angka2 << " adalah: " << hasil << endl;

    return 0;
}
