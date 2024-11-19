#include <iostream>
using namespace std;

int tambah(int a, int b);
int pengurangan(int c, int d);
void cekGanjilGenap(int n);

int main() {
    int pilihan;
    do {
        //Menu
        cout << "\n--- Menu Aplikasi ---\n";
        cout << "1. Penjumlahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Cek Ganjil/Genap\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: {
            //Penjumlahan
            int a, b;
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;
            cout << "Hasil penjumlahan: " << tambah(a, b) << endl;
            break;
        }
        case 2: {
            //Pengurangan
            int c, d;
            cout << "Masukkan angka pertama: ";
            cin >> c;
            cout << "Masukkan angka kedua: ";
            cin >> d;
            cout << "Hasil pengurangan: " << pengurangan(c, d) << endl;
            break;
        }
        case 3: {
            //Cek ganjil/genap
            int n;
            cout << "Masukkan angka: ";
            cin >> n;
            cekGanjilGenap(n);
            break;
        }
        case 4:
            //Keluar
            cout << "Keluar dari aplikasi. Terima kasih!\n";
            break;
        default:
            //pilihan tidak valid
            cout << "Pilihan tidak valid, coba lagi.\n";
        }
    } while (pilihan != 4);

    return 0;
}

//fungsi penjumlahan
int tambah(int a, int b) {
    return a + b;
}

//fungsi faktorial
int pengurangan(int c, int d) {
    return c - d;
}

//prosedur cek ganjil/genap
void cekGanjilGenap(int n) {
    if (n % 2 == 0) {
        cout << n << " adalah angka genap.\n";
    } else {
        cout << n << " adalah angka ganjil.\n";
    }
}
