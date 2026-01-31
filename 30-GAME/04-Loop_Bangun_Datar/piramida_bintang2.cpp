#include<iostream>

int main(){
    int baris;
    
    std::cout << "Masukkan Jumlah Baris: ";
    std::cin >> baris;

    for(int x = 1; x <= baris; x++){
        for(int y = 0; y <= x; y++){
            std::cout << " ";
        }
        for(int z = 1; z <= (2* (baris - x) - 1); z++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}