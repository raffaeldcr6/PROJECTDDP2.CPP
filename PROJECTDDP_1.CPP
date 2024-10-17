#include<iostream>
#include<cmath>
using namespace std;

void tampilkanMenu(){
  cout << "=== Checking the Area and Perimeter of 2-Dimensional Flat Figures in meters ===" << endl;
  cout << "=== Project by Group 2, Mata Kuliah Dasar-Dasar Pemrograman ===" << endl;
  cout << "1. Persegi" << endl;
  cout << "2. Persegi Panjang" << endl;
  cout << "3. Lingkaran" << endl;
  cout << "4. Segitiga" << endl;
  cout << "5. Trapesium" << endl;
  cout << "6. Jajar Genjang" << endl;
  cout << "7. Belah Ketupat" << endl;
  cout << "8. Layang-layang" << endl;
  cout << "9. Selesai" << endl;
  cout << "Pilih bangunan (1-9): ";
}

void hitungBangunan (int pilihan){
  double sisi, panjang, lebar, jariJari, alas ,tinggi, sisiMiring, sisi1, sisi2, diagonal1, diagonal2, luas, keliling; 
switch (pilihan) {
        case 1: 
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            keliling = 4 * sisi;
            cout << "Luas Persegi-nya adalah: " << luas << endl;
            cout << "Keliling Persegi-nya adalah: " << keliling << endl;
            break;
            
        case 2: 
            cout << "Masukkan panjang dan lebar persegi panjang: ";
            cin >> panjang >> lebar;
            luas = panjang * lebar;
            keliling = 2 * (panjang + lebar);
            cout << "Luas Persegi Panjang-nya adalah: " << luas << endl;
            cout << "Keliling Persegi Panjang-nya adalah: " << keliling << endl;
            break;

        case 3: 
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> jariJari;
            luas = M_PI * jariJari * jariJari; // M_PI dari <cmath>
            keliling = 2 * M_PI * jariJari;
            cout << "Luas Lingkaran-nya adalah: " << luas << endl;
            cout << "Keliling Lingkaran-nya adalah: " << keliling << endl;
            break;

        case 4: 
            cout << "Masukkan alas dan tinggi segitiga: ";
            cin >> alas >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas Segitiga-nya adalah " << luas << endl;
            cout << "Masukkan panjang sisi miring segitiga: ";
            cin >> sisiMiring;
            keliling = alas + sisiMiring + sqrt(alas * alas + tinggi * tinggi); // Menghitung sisi miring sebagai sisi terpendek
            cout << "Keliling Segitiga-nya adalah " << keliling << endl;
            break;

        case 5: 
            double alas1, alas2, tinggiTrapesium;
            cout << "Masukkan panjang alas 1, alas 2 dan tinggi trapesium: ";
            cin >> alas1 >> alas2 >> tinggiTrapesium;
            luas = 0.5 * (alas1 + alas2) * tinggiTrapesium;
            cout << "Luas Trapesium-nya adalah: " << luas << endl;
            cout << "Masukkan panjang sisi miring 1 dan sisi miring 2: ";
            cin >> sisi1 >> sisi2;
        case 6: 
            cout << "Masukkan alas dan tinggi jajar genjang: ";
            cin >> alas >> tinggi;
            luas = alas * tinggi;
            cout << "Luas Jajar Genjang-nya adalah: " << luas << endl;
            cout << "Masukkan panjang sisi miring: ";
            cin >> sisiMiring;
            keliling = 2 * (alas + sisiMiring);
            cout << "Keliling Jajar Genjang-nya adalah: " << keliling << endl;
            break;

        case 7: 
            cout << "Masukkan panjang sisi belah ketupat: ";
            cin >> sisi;
            cout << "Masukkan panjang diagonal 1 dan diagonal 2: ";
            cin >> diagonal1 >> diagonal2;
            luas = 0.5 * diagonal1 * diagonal2;
            keliling = 4 * sisi;
            cout << "Luas Belah Ketupat-nya adalah: " << luas << endl;
            cout << "Keliling Belah Ketupat-nya adalah: " << keliling << endl;
            break;

        case 8: 
            cout << "Masukkan panjang diagonal 1 dan diagonal 2: ";
            cin >> diagonal1 >> diagonal2;
            luas = 0.5 * diagonal1 * diagonal2;
            cout << "Luas Layang-Layang-nya adalah: " << luas << endl;
            cout << "Masukkan panjang sisi 1 dan sisi 2: ";
            cin >> sisi1 >> sisi2;
            keliling = 2 * (sisi1 + sisi2);
            cout << "Keliling Layang-Layang-nya adalah: " << keliling << endl;
            break;

        case 9:
            cout << "Terima kasih! Program selesai." << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }
}

int main() {
    int pilihan;

    do {
        tampilkanMenu();
        cin >> pilihan;
        hitungBangunan(pilihan);
        cout << endl;
    } while (pilihan != 9);

    return 0;
}
