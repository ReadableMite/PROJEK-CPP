#include<iostream>

int main(){
    int baris;

    std::cout << "Masukkan Jumlah Baris: ";
    std::cin >> baris;

    for(int i = 1; i <= baris; i++){
        for(int k = 0; k <= (baris - i); k++){
            std::cout << " ";
        }
        for(int j = 0; j < (2*i - 1); j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}