#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Kendaraan {
public:
    string nama;
    double hargaSewa;

    Kendaraan(string nama, double hargaSewa) : nama(nama), hargaSewa(hargaSewa) {}
};

class PenyediaKendaraan {
public:
    string nama;
    vector<Kendaraan> daftarKendaraan;

    PenyediaKendaraan(string nama) : nama(nama) {}

    void tambahKendaraan(Kendaraan kendaraan) {
        daftarKendaraan.push_back(kendaraan);
    }

    void tampilkanDaftarKendaraan() {
        cout << "Daftar Kendaraan di " << nama << ":" << endl;
        for (int i = 0; i < daftarKendaraan.size(); ++i) {
            cout << i + 1 << ". " << daftarKendaraan[i].nama << " - Rp " << daftarKendaraan[i].hargaSewa << endl;
        }
    }

    Kendaraan getKendaraan(int index) {
        if (index < 0 || index >= daftarKendaraan.size()) {
            throw out_of_range("Index kendaraan tidak valid.");
        }
        return daftarKendaraan[index];
    }
};

class User {
public:
    string nama;
    vector<Kendaraan> keranjang;

    User(string nama) : nama(nama) {}

    void tambahkanKeKeranjang(Kendaraan kendaraan) {
        keranjang.push_back(kendaraan);
        cout << kendaraan.nama << " ditambahkan ke keranjang." << endl;
    }

    void tampilkanKeranjang() {
        cout << "Keranjang Sewa:" << endl;
        for (int i = 0; i < keranjang.size(); ++i) {
            cout << i + 1 << ". " << keranjang[i].nama << " - Rp " << keranjang[i].hargaSewa << endl;
        }
    }

    void lakukanPembayaran() {
        double total = 0;
        for (Kendaraan k : keranjang) {
            total += k.hargaSewa;
        }
        cout << "Total pembayaran: Rp " << total << endl;
        cout << "Pembayaran berhasil!" << endl;
    }
};

int main() {
    // Inisialisasi penyedia kendaraan dan daftar kendaraan
    PenyediaKendaraan penyedia("Penyedia Kendaraan");
    penyedia.tambahKendaraan(Kendaraan("Mobil Avanza", 300000));
    penyedia.tambahKendaraan(Kendaraan("Motor Vario", 150000));

    // User mendaftar
    string namaUser;
    cout << "Masukkan nama Anda: ";
    getline(cin, namaUser);
    User user(namaUser);

    // User membuka aplikasi dan memilih kendaraan
    cout << "Selamat datang, " << user.nama << "!" << endl;

    bool selesai = false;
    while (!selesai) {
        penyedia.tampilkanDaftarKendaraan();
        
        int pilihan;
        cout << "Masukkan nomor kendaraan yang ingin disewa (0 untuk selesai): ";
        cin >> pilihan;

        if (pilihan == 0) {
            selesai = true;
        } else {
            try {
                Kendaraan kendaraan = penyedia.getKendaraan(pilihan - 1);
                user.tambahkanKeKeranjang(kendaraan);
            } catch (const out_of_range& e) {
                cout << "Pilihan tidak valid, silakan coba lagi." << endl;
            }
        }
    }

    // User memeriksa keranjang dan melakukan pembayaran
    user.tampilkanKeranjang();
    user.lakukanPembayaran();

    // Proses pengiriman (dalam contoh sederhana ini, hanya output)
    cout << "Kendaraan sedang disiapkan..." << endl;
    cout << "Kendaraan sedang dalam pengiriman..." << endl;
    cout << "Kendaraan telah diterima. Selamat berkendara!" << endl;

    return 0;
}
