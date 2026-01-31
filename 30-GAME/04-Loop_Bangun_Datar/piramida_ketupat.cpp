#include <iostream>

int main() {
    int baris;
    std::cout << "Masukkan Jumlah Baris (Setengah Diamond): ";
    std::cin >> baris;

    // ========================================================
    // BAGIAN 1: PIRAMIDA NORMAL (Atas)
    // Logika: x bertambah, Spasi berkurang, Bintang bertambah
    // ========================================================
    for (int x = 1; x <= baris; x++) {
        
        // Loop y (Spasi): Menggunakan rumus (baris - x)
        for (int y = 1; y <= (baris - x); y++) {
            std::cout << " ";
        }

        // Loop z (Bintang): Menggunakan rumus bilangan ganjil $2x - 1$
        for (int z = 1; z <= (2 * x - 1); z++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // ========================================================
    // BAGIAN 2: PIRAMIDA TERBALIK (Bawah)
    // Logika: x berkurang, Spasi bertambah, Bintang berkurang
    // Kita mulai dari (baris - 1) agar garis tengah tidak double
    // ========================================================
    for (int x = baris - 1; x >= 1; x--) {
        
        // Loop y (Spasi): Sama seperti di atas, tapi karena x mengecil,
        // hasil (baris - x) akan semakin besar (spasi bertambah).
        for (int y = 1; y <= (baris - x); y++) {
            std::cout << " ";
        }

        // Loop z (Bintang): Menggunakan rumus yang sama $2x - 1$
        // Karena x mengecil, jumlah bintang otomatis berkurang.
        for (int z = 1; z <= (2 * x - 1); z++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}