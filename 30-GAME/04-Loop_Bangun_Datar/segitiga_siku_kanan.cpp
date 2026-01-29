#include<iostream>

int main(){
    int baris;

    std::cout << "Masukkan Jumlah Baris: ";
    std::cin >> baris;

    for(int i = 0; i <= baris; i++){
        for(int k = 1; k <= (baris - i); k++){
            std::cout << " ";
        }
        for(int j = 0; j <= i; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}