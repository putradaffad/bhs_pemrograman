#include <iostream>

using namespace std;

int main() {
    double angkaPertama, angkaKedua;

    // Meminta input angka pertama dan kedua
    cout << "Masukkan Angka Pertama : ";
    cin >> angkaPertama;
    cout << "Masukkan Angka Kedua : ";
    cin >> angkaKedua;

    // Melakukan operasi matematika
    double penjumlahan = angkaPertama + angkaKedua;
    double pengurangan = angkaPertama - angkaKedua;
    double perkalian = angkaPertama * angkaKedua;
    double pembagian;

    // Mengecek pembagian dengan nol
    if (angkaKedua != 0) {
        pembagian = angkaPertama / angkaKedua;
    } else {
        cout << "Kesalahan: Pembagian dengan nol tidak diperbolehkan." << endl;
        return 1; // Mengakhiri program dengan kode kesalahan
    }

    // Menampilkan hasil
    cout << "Penjumlahan : " << penjumlahan << endl;
    cout << "Pengurangan : " << pengurangan << endl;
    cout << "Perkalian : " << perkalian << endl;
    cout << "Pembagian : " << pembagian << endl;

    return 0;
}

