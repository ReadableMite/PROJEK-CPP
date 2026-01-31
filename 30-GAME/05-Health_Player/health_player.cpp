#include <iostream>

int main(){
    int hp;
    
    std::cout << "Masukkan Jumlah HP: ";
    std::cin >> hp;

    for(int i = 0; i <= hp; i++){
        if(hp<=100){
            std::cout << "#";
        }else{
            std::cout << "Health Player Terlalu Besar!";
        }
    }
    std::cout << std::endl;
    return 0;
}