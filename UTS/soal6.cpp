#include <iostream>

using namespace std;

int main()
{
    
    float a,b;
    float hasil;
    int pilihan;
    
    cout << "KALKULATOR SEDERHANA\n";
    cout << "1.Pertambahan\n";
    cout << "2.Pengurangan\n";
    cout << "3.Perkalian\n";
    cout << "4.Pembagian\n";
    cout << "Pilih 1-4 : ";
    cin >> pilihan;
    cout << endl;
    
    if(pilihan == 1){
        cout << "PERTAMBAHAN\n";
        cout << "masukkan angka pertama : ";
        cin >> a;
        cout << "masukkan angka kedua : ";
        cin >> b;
        hasil = a + b;
        cout << "hasil pertambahan dari " << a << " dan " << b << " adalah " << hasil;
    }else if(pilihan == 2){
        cout << "PENGURANGAN\n";
        cout << "masukkan angka pertama : ";
        cin >> a;
        cout << "masukkan angka kedua : ";
        cin >> b;
        hasil = a - b;
        cout << "hasil pengurangan dari " << a << " dan " << b << " adalah " << hasil;
    }else if(pilihan == 3){
        cout << "PERKALIAN\n";
        cout << "masukkan angka pertama : ";
        cin >> a;
        cout << "masukkan angka kedua : ";
        cin >> b;
        hasil = a * b;
        cout << "hasil perkalian dari " << a << " dan " << b << " adalah " << hasil;
    }else if(pilihan == 4){
        cout << "PEMBAGIAN\n";
        cout << "masukkan angka pertama : ";
        cin >> a;
        cout << "masukkan angka kedua : ";
        cin >> b;
        hasil = a / b;
        cout << "hasil pembagian dari " << a << " dan " << b << " adalah " << hasil;
    }else{
        cout << "Pilihan Tidak Valid";
    }
        
        cout << "\n\nTerimakasi telah menggunakan program ini!";
    return 0;
}

