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
            keliling = alas1 + alas2 + sisi1 + sisi2;
            cout << "Keliling Trapesium-nya adalah: " << keliling << endl;
            break;
