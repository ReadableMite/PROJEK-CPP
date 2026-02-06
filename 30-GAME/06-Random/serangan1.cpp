#include <iostream>
#include <cstdlib>
#include <ctime> // Buat srand

int main(){
    // Penting: Biar randomnya nggak sama terus tiap game dibuka
    srand(time(0)); 

    int jumlahSerangan;

    while(true){
        std::cout << "\nMasukkan Jumlah Serangan: ";
        std::cin >> jumlahSerangan;
    
        for(int i = 1; i <= jumlahSerangan; i++){
            // Kita acak angka 1-10
            int keberuntungan = (rand() % 10) + 1; 

            if(keberuntungan == 7){ // Angka hoki buat Critical
                std::cout << "Serangan ke-" << i << ": CRITICAL HIT! (Damage 200%)\n";
            } else {
                std::cout << "Serangan ke-" << i << ": Hit! (Damage 100%)\n";
            }
        }
    }
    return 0;
}