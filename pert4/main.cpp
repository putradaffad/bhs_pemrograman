#include <iostream>
using namespace std;

void tambah(int angka1, int angka2){
    cout << "TAMBAH : " << angka1 + angka2 << endl;
}

void kurang(int angka1, int angka2){
    cout << "KURANG : " << angka1 - angka2 << endl;
}

void kali(int angka1, int angka2){
    cout << "KALI : " << angka1 * angka2 << endl;
}

void bagi(int angka1, int angka2){
    cout << "BAGI : " << angka1 / angka2 << endl;
}

int main(){
    do{
        switch (pilih){
            case '1':
                cout << "Masukkan Angka 1 : ";
                cin >> angka1;
                cout << "Masukkan Angka 2 : ";
                cin >> angka2;
                tambah(angka1, angka2);
                break;
            case '2':
                cout << "Masukkan Angka 1 : ";
                cin >> angka1;
                cout << "Masukkan Angka 2 : ";
                cin >> angka2;
                kurang(angka1, angka2);
                break;
            case '3':
                cout << "Masukkan Angka 1 : ";
                cin >> angka1;
                cout << "Masukkan Angka 2 : ";
                cin >> angka2;
                kali(angka1, angka2);
                break;
            case '4':
                cout << "Masukkan Angka 1 : ";
                cin >> angka1;
                cout << "Masukkan Angka 2 : ";
                cin >> angka2;
                bagi(angka1, angka2);
                break;
            case '5' :
                cout << "EXIT" << endl;
                break;
            default :
                cout << "Pilihan Salah!" << endl;

        }

    }while(pilih != '5');
    return 0;
}
    