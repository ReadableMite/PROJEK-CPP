#include <iostream>

void current_hp(int &hp, int input){
    hp-=input;
}

int main (){
    int hp = 100;
    int input;

    std::cout << "Masukkan nyawa yg hilang: ";
    std::cin >> input;

    std::cout << "HP: ";
    current_hp(hp, input);

    return 0;
}