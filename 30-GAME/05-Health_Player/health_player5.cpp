#include <iostream>

int main() {
    // Variabel awal
    int current_hp;
    int max_hp = 100; // Nanti ini bisa berubah pas level up
    int total_bar_visual = 10; // Panjang bar di layar tetep 10 kotak

    while (true) {
        std::cout << "\n--- STATUS KSATRIA ---" << std::endl;
        std::cout << "Max HP saat ini: " << max_hp << std::endl;
        std::cout << "Masukkan HP saat ini (Ketik -1 untuk Level Up): ";
        std::cin >> current_hp;

        // Fitur Level Up (Simulasi)
        if (current_hp == -1) {
            max_hp += 50; // Max HP nambah setiap level up
            std::cout << "LEVEL UP! Max HP sekarang: " << max_hp << "\n";
            continue;
        }

        // Validasi input
        if (current_hp > max_hp) {
            std::cout << "HP tidak boleh melebihi Max HP (" << max_hp << ")!\n";
            continue;
        }

        if (current_hp <= 0) {
            std::cout << "KSATRIA GUGUR!\n";
            break;
        }

        // RUMUS SCALING:
        // Kita kali dulu baru bagi. 
        // Hasilnya adalah berapa jumlah '#' dari total 10 kotak yang harus muncul.
        int hp_bar_aktif = (current_hp * total_bar_visual) / max_hp;

        // Gambar Visual Bar
        std::cout << "HP: [";
        for (int i = 0; i < hp_bar_aktif; i++) {
            std::cout << "#";
        }
        for (int j = 0; j < (total_bar_visual - hp_bar_aktif); j++) {
            std::cout << "O";
        }
        std::cout << "] " << current_hp << "/" << max_hp << std::endl;

        // Warning System berdasarkan persentase
        if (hp_bar_aktif <= 3) {
            std::cout << "WARNING: Darah kritis! Segera cari bantuan!" << std::endl;
        }
    }

    return 0;
}