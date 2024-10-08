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
