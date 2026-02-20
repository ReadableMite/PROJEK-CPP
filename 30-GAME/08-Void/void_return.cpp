#include <iostream>

// Worker
void tampilkan1(){
    std::cout << "Masukkan Power Dasar Senjata: ";  // buat menampilkan fungsi cout itu
}
void tampilkan2(){
    std::cout << "Masukkan Bonus Power: ";
}

// Reporter
int multiplier(int input1, int input2){
    return input1 + input2;     // buat menghitung bonus power dari input user
}

int main(){

    int input1, input2, hasil;  // nilai input user

    tampilkan1();   // menampilkan fungsi void tampilkan1() yang nantinya menampilkan cout ke user
    std::cin >> input1;  // masukin inputan user
    tampilkan2();   // menampilkan fungsi void tampilkan2() yang nantinya menampilkan cout ke user
    std::cin >> input2;

    hasil = multiplier(input1, input2);
    std::cout << "\nMenghitung total kekuatan...\nPower Akhir Senjata Kamu: " << hasil << std::endl;
    std::cout << "[PESAN SISTEM]: Selamat! Senjata kamu makin tajam!\n";

    return 0;
}