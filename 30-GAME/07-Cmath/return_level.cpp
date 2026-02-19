#include <iostream>

int multiplier(int x){
    int y;
    y = x * 10;
    return y;
}

// 1 koin emas setara 10 - 20 koin perak, jadi aku kalikan 10
int jumlah(int j, int k){
    int l;
    l = (j * 10) + k;
    return l;
}

int main(){
    int input_level, hasil, j, k, hasil2;

    std::cout << "Masukkan level dasar karakter: ";
    std::cin >> input_level;

    hasil = multiplier(input_level);
    std::cout << "Power Level (level dikali 10): " << hasil << std::endl;

    // ================================================
    std::cout << "\n";

    std::cout << "Masukkan jumlah koin emas: ";
    std::cin >> j;
    std::cout << "Masukkan jumlah koin perak: ";
    std::cin >> k;

    hasil2 = jumlah(j, k);
    std::cout << "Total kekayaan koin: " << hasil2 << std::endl;
    
    return 0;
}