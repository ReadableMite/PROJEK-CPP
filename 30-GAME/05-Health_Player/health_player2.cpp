#include <iostream> // standard library

int main(){ // main function
    int input, hp;  // input: untuk input jumlah health dari user
                    // hp: untuk cout # sebagai bar health player
    
    while(true){
        std::cout << "Masukkan Jumlah HP: "; // user input untuk jumlah health nya
        std::cin >> input;

        hp = input/10;  // hasil input dibagi 10, biar bar ga melebihi layar atau terlalu banyak
                        // misal 100 dibagi 10, hasilnya jadi 10 bar buat 100 health

        for(int i = 0; i <= hp; i++){ // fungsi biar cout # selalu berulang
            if(hp<=10){ // cek apakah hp yg udah dibagi (input/10) ngga lebih dari 10 bar
                std::cout << "#"; // cout bar nya
            }else{ // kondisi kalo salah
                std::cout << "Health Player Terlalu Besar!"; // ini program yang di cout kalo salah kondisinya
                break; // biar for ga cout terus, ajdi programnya langsung ke bawah
            }
        }
        std::cout << std::endl; // spasi enter
    }
    return 0; // return biar kodenya jalan
}