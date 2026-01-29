#include <iostream>

int main() {
    int baris;
    std::cout << "Masukkan Jumlah Baris: ";
    std::cin >> baris;

    // ========================================================
    // 01. SEGITIGA SIKU KIRI (NORMAL)
    // LOGIKA: Bintang sejajar dengan baris. 
    // Baris 1 = 1 bintang, Baris 2 = 2 bintang, dst.
    // ========================================================
    std::cout << "\n01. Siku Kiri Normal:\n";
    for (int a = 1; a <= baris; a++) {        // a = Baris saat ini
        for (int b = 1; b <= a; b++) {        // b = Cetak bintang sebanyak nilai 'a'
            std::cout << "*";                 // Jika a=3, maka loop b jalan 3 kali
        }
        std::cout << std::endl;
    }

    // ========================================================
    // 02. SEGITIGA SIKU KIRI (TERBALIK)
    // LOGIKA: Bintang mulai dari jumlah maksimal, lalu berkurang.
    // Strategi: Mulai loop bintang dari angka tertinggi (baris) ke arah 'a'.
    // ========================================================
    std::cout << "\n02. Siku Kiri Terbalik:\n";
    for (int a = 1; a <= baris; a++) {        // a = Baris saat ini
        for (int b = baris; b >= a; b--) {    // b = Mulai dari angka max, berhenti di angka 'a'
            std::cout << "*";                 // Jika baris=5 dan a=1, maka b jalan 5x (5 ke 1)
        }                                     // Jika baris=5 dan a=2, maka b jalan 4x (5 ke 2)
        std::cout << std::endl;
    }

    // ========================================================
    // 03. SEGITIGA SIKU KANAN (TERBALIK)
    // LOGIKA: "Dorong" bintang ke kanan pakai spasi. 
    // Spasi bertambah (1, 2, 3...), Bintang berkurang (5, 4, 3...).
    // ========================================================
    std::cout << "\n03. Siku Kanan Terbalik:\n";
    for (int a = 1; a <= baris; a++) {        // a = Baris saat ini
        
        // Loop b (Spasi): Jumlah spasi harus kurang dari nomor baris saat ini
        // Baris 1 (a=1) -> b < 1 (0 spasi)
        // Baris 2 (a=2) -> b < 2 (1 spasi)
        for (int b = 1; b < a; b++) {
            std::cout << " ";
        }
        
        // Loop c (Bintang): Sama seperti Pola 02, mulai dari max ke 'a'
        for (int c = baris; c >= a; c--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // ========================================================
    // 04. SEGITIGA SIKU KANAN (NORMAL)
    // LOGIKA: Spasi berkurang (4, 3, 2...), Bintang bertambah (1, 2, 3...).
    // Strategi: Spasi mulai dari angka tertinggi ke arah 'a'.
    // ========================================================
    std::cout << "\n04. Siku Kanan Normal:\n";
    for (int a = 1; a <= baris; a++) {        // a = Baris saat ini
        
        // Loop b (Spasi): Mulai dari angka max, berhenti sebelum menyentuh 'a'
        // Baris 1 (a=1) -> b jalan dari 5 sampai 2 (4 spasi)
        // Baris 2 (a=2) -> b jalan dari 5 sampai 3 (3 spasi)
        for (int b = baris; b > a; b--) {
            std::cout << " ";
        }
        
        // Loop c (Bintang): Sama seperti Pola 01, cetak sebanyak nomor baris 'a'
        for (int c = 1; c <= a; c++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}