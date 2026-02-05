#include <iostream>
#include <cstdlib>

int main(){
    int serang, angka;

    while(true){
        std::cout << "Jumlah serangan: ";
        std::cin >> serang;
    
        for(int i = 0; i <= serang; i++){
            if(angka == 0){
                std::cout << "Critical Hit!\n";
            }

            angka = rand() % serang;
            std::cout << "Hit!\n";
        }
    }
    return 0;
}