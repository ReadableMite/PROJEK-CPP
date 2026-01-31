#include <iostream> // standard library

int main(){ // main function
    int input, hp, max_bar;    // input: untuk input jumlah health dari user
                                    // hp: untuk cout # sebagai bar health player
                                    // max_bar: bar yang hilang
    
    while(true){
        std::cout << "Masukkan Jumlah HP: "; // user input untuk jumlah health nya
        std::cin >> input;

        hp = input/10;  // hasil input dibagi 10
        
        // --------------------------------------------------------------------------
        // PERBAIKAN 1: -= diganti jadi = 10 - hp. 
        // Kalau pake -= nilainya bakal minus terus setiap kali lo input baru.
        max_bar = 10 - hp; // <<--- SALAH DI SINI (Sebelumnya max_bar -= hp)
        // --------------------------------------------------------------------------

        // PERBAIKAN 2: <= diganti jadi <. 
        // Kalau i=0 dan hp=10, loop <= bakal jalan 11 kali. Bar lo jadi kelebihan.
        for(int i = 0; i < hp; i++){ // <<--- SALAH DI SINI (Sebelumnya i <= hp)

            // Fitur Tambahan: Warning System
            if (input <= 30 && input > 0) {
                std::cout << "WAIRNING: Darah kritis! Gunakan Potion!\n";
            } else if (input <= 0) {
                std::cout << "KSATRIA GUGUR! Game Over.\n";
                break; 
            }

            if(hp<=10){ 
                std::cout << "#"; 
            }else{ 
                std::cout << "Health Player Terlalu Besar!"; 
                break; 
            }
        }

        // --------------------------------------------------------------------------
        // PERBAIKAN 3: Hapus baris "max_bar = 10" di dalam sini.
        // Karena ngerubah nilai variabel di dalem loop j bikin perulangannya berhenti prematur.
        for(int j = 0; j < max_bar; j++){
            std::cout << "-"; 
            // max_bar = 10; // <<--- SALAH DI SINI (Dihapus biar loop j lancar)
        }
        // --------------------------------------------------------------------------

        std::cout << std::endl; // spasi enter
    }
    return 0; // return biar kodenya jalan
}