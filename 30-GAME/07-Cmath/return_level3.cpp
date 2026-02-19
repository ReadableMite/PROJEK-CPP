#include <iostream>

int multiplier(int level){
    return level * 10;
}

// 1 koin emas setara 10 - 20 koin perak, jadi aku kalikan 10
int jumlah(int gold_amount, int silver_amount){
    return (gold_amount * 10) + silver_amount;
}

int main(){
    int input_level, hasil, gold_amount, silver_amount, hasil2;

    std::cout << "Masukkan level dasar karakter: ";
    std::cin >> input_level;

    hasil = multiplier(input_level);
    std::cout << "Power Level (level dikali 10): " << hasil << std::endl;

    // ================================================
    std::cout << "\n";

    std::cout << "Masukkan jumlah koin emas: ";
    std::cin >> gold_amount;
    std::cout << "Masukkan jumlah koin perak: ";
    std::cin >> silver_amount;

    hasil2 = jumlah(gold_amount, silver_amount);
    std::cout << "Total kekayaan koin: " << hasil2 << std::endl;
    
    return 0;
}