/*
Analisis Program:
Program di atas menggunakan nested loops (perulangan bersarang) untuk menghasilkan pola tertentu pada output. Berikut adalah penjelasan rinci tentang program tersebut:


1. Deklarasi Variable
int n, _, i, _; 
Ada kesalahan di sini karena ada dua variabel dengan nama _. Mungkin salah satunya harusnya s dan yang lain j atau k. Mari kita anggap yang pertama adalah s dan yang kedua adalah j untuk memudahkan penjelasan.

2. Input Jumlah Baris
cout << "Masukkan jumlah baris : ";
cin >> n;

3. Perulangan Luar:
cout << "Masukkan jumlah baris : ";
cin >> n;
Perulangan ini berjalan dari 1 hingga 'n', yang menentukan jumlah baris yang akan dicetak.

4. Perulangan Dalam Pertama (untuk mencetak spasi):
for (s = i; s < n; s++)
    cout << " ";

5. Perulangan Dalam Kedua (untuk mencetak bintang):
for (j = 1; j <= i; j++)
    cout << "*";
Perulangan ini mencetak bintang (*). Jumlah bintang yang dicetak sama dengan nomor barisnya (i).

Dengan asumsi variabel _ yang pertama adalah s dan yang kedua adalah j, berikut adalah kode yang diperbaiki:
*/


#include <iostream>
using namespace std;

int main() {
    int n, i, s, j;
    cout << "Masukkan jumlah baris : ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (s = i; s < n; s++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}

/*
Penjelasan Output:
Misalkan pengguna memasukkan n = 5, program ini akan menghasilkan output seperti berikut:
    *
   **
  ***
 ****
*****
*/