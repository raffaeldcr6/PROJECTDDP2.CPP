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
