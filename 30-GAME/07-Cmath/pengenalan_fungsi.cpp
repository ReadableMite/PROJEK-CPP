#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // --- Daftar Library cmath (Referensi: cppreference.com) ---
    // ceil(x)  : Pembulatan ke atas
    // floor(x) : Pembulatan ke bawah
    // pow(x,y) : x pangkat y
    // sqrt(x)  : Akar kuadrat
    // fabs(x)  : Nilai absolut (float)
    // sin, cos, tan : Trigonometri (Radian)
    
    // Contoh penggunaan biar VS Code nggak deteksi sebagai bahasa R:
    double angka = 5.75;
    
    cout << "=== Test Library cmath Klandestin ===" << endl;
    cout << "Angka asli    : " << angka << endl;
    cout << "Ceil (Atas)   : " << ceil(angka) << endl;
    cout << "Floor (Bawah) : " << floor(angka) << endl;
    cout << "Akar dari 25  : " << sqrt(25) << endl;

    return 0;
}