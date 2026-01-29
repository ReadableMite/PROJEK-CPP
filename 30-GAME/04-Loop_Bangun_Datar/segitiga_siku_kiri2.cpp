#include<iostream>

int main(){
    int baris;

    std::cout << "Masukkan Jumlah Baris: ";
    std::cin >> baris;

    for(int i = 0; i <= baris; i++){
        for(int j = baris; j >= i; j--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}