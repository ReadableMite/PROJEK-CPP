#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){
    std::srand(time(0));
    for(int i=0;i<5;i++){
        std::string nama="Jane ";
        std::string nama2[5]={"Doe", "Cute", "Cantik", "Manis", "Succubus"};
        int tengah=std::rand() % 5;
        std::cout<<nama.append(nama2[tengah])<<std::endl;;
    }
    return 0;
}

/* Fungsi append()

append() adalah fungsi di cpp yang bisa nambahin sesuatu di akhir program.
Misal nambahin kata/kalimat, dan lainnya. INtinya dia pake string. Misal nama.append(string), gituu. 

Di pakai waktu apa?
append() dipakai waktu ada variabel yang 1 tetap dan setelahnya itu ga tetap.
Misal kita mau bikin nama "Jane " tapi nama kedua nya itu random, ya bisa ikuti program diatas.
Hasilnya, nama Jane bisa diikuti nama random yang udah kita bikin pake string. Jadinya lebih bervariasi.

append() cocok buat "Potong dan Tempel" sesuatu dengan syarat 1 variabel tetap sebagai kepala untuk diikuti append().

Kalo di projek Klandestin ini bisa dipake buat generate ribuan nama secara random buat NPC, jadinya kita bisa ketik code lebih ringkas tapi hasil memuaskan
*/