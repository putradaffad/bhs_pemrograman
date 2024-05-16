#include <iostream>

using namespace std;

const double HARGA_PECEL_LELE = 15000;
const double HARGA_NASI_GORENG = 17000;
const double HARGA_ES_TEH = 5000;
const double HARGA_ES_JERUK = 7000;

void displayMainMenu() {
    cout << "MENU PILIHAN : \n";
    cout << "1. Makanan\n";
    cout << "2. Minuman\n";
    cout << "3. Kembali\n";
    cout << "Pilih 1-3 : ";
}

void displayMakananMenu() {
    cout << "Menu Makanan : \n";
    cout << "1. Pecel Lele (15000)\n";
    cout << "2. Nasi Goreng (17000)\n";
    cout << "3. Kembali\n";
    cout << "Pilih 1-3 : ";
}

void displayMinumanMenu() {
    cout << "Menu Minuman : \n";
    cout << "1. Es Teh (5000)\n";
    cout << "2. Es Jeruk (7000)\n";
    cout << "3. Kembali\n";
    cout << "Pilih 1-3 : ";
}

void handleMakanan(int choice, int & totalMakanan) {
    double hargaPerItem;
    if (choice == 1) {
        hargaPerItem = HARGA_PECEL_LELE;
    } else if (choice == 2) {
        hargaPerItem = HARGA_NASI_GORENG;
    } else {
        return;
    }

    int jumlahPesanan;
    cout << "Masukkan jumlah pesanan : ";
    cin >> jumlahPesanan;
    double totalHarga = jumlahPesanan * hargaPerItem;
    cout << "Total harga pesanan : " << totalHarga << "\n";
    totalMakanan += totalHarga;
}

void handleMinuman(int choice, int &totalMinuman) {
    double hargaPerItem;
    if (choice == 1) {
        hargaPerItem = HARGA_ES_TEH;
    } else if (choice == 2) {
        hargaPerItem = HARGA_ES_JERUK;
    } else {
        return;
    }

    int jumlahPesanan;
    cout << "Masukkan jumlah pesanan : ";
    cin >> jumlahPesanan;
    double totalHarga = jumlahPesanan * hargaPerItem;
    cout << "Total harga pesanan : " << totalHarga << "\n";
    totalMinuman += totalHarga;
}

int main() {
    int mainChoice, subChoice;
    int totalMakanan = 0;
    int totalMinuman = 0;

    while (true) {
        displayMainMenu();
        cin >> mainChoice;

        if (mainChoice == 1) {  // Menu Makanan
            while (true) {
                displayMakananMenu();
                cin >> subChoice;

                if (subChoice == 3) break;

                handleMakanan(subChoice, totalMakanan);
            }
        } else if (mainChoice == 2) {  // Menu Minuman
            while (true) {
                displayMinumanMenu();
                cin >> subChoice;

                if (subChoice == 3) break;

                handleMinuman(subChoice, totalMinuman);
            }
        } else if (mainChoice == 3) {
            cout << "Terima kasih, sampai jumpa!\n";
            break;
        }
    }

    double totalHargaSemuaPesanan = totalMakanan + totalMinuman;
    cout << "Total semua pesanan : " << totalHargaSemuaPesanan << "\n";

    return 0;
}


