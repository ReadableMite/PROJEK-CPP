#include <iostream>

int main(){
    int input, hp;
    
    while(true){
        std::cout << "Masukkan Jumlah HP: ";
        std::cin >> input;

        hp = input/10;

        for(int i = 0; i <= hp; i++){
            if(hp<=10){
                std::cout << "#";
            }else{
                std::cout << "Health Player Terlalu Besar!";
                break;
            }
        }
        std::cout << std::endl;
    }
    return 0;
}