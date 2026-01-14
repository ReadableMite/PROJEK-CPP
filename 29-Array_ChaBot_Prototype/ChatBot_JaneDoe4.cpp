#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include "DialogueManager.hpp"

/*
0 Defensif (Tsundere)Jual mahal, sinis di awal, susah percaya.Multiplier: 0.5. (Affinity naik lambat).
1 Ekstrovert (Ramah)Gampang akrab, suka ngobrol, ceria.Multiplier: 1.5. (Gampang banget di-Lobi).
2 Kaku (Stoic)Pendiam, gak banyak emosi, bicara seperlunya.Multiplier: 1.0. (Stabil, gak gampang marah/seneng).
3 TemperamentalGampang tersinggung, meledak-ledak.Multiplier: 0.8. (Mood gampang drop kalau salah ngomong).
4 Obsesif (Bucin)Sangat bergantung sama User, haus perhatian.Multiplier: 2.0. (Affinity naik gila-gilaan, tapi mood drop parah kalau dicuekin).
*/

// Respon
int dapatkan_menu_id(std::string input){
    for (int i=0;i<input.length();i++){
        input[i]=std::tolower(input[i]);
    }
    if(input=="halo") return 0;
    if(input=="sapa") return 1;
    if(input=="tanya") return 2;
    if(input=="diam") return 3;
    if(input=="jutek") return 4;
    if(input=="marah") return 5;
    if(input=="jelek") return 6;
    if(input=="menghina") return 7;
    if(input=="benci") return 8;
    return -1;
}

// Daftar Menu
void tampilan_menu(){
    std::cout<<"\n--- Daftar Menu ChatBot ---\n";
    std::cout<<"1. Halo\n2. Sapa\n3. Tanya\n4. Diam\n5. Jutek\n6. Marah\n7. Jelek\n8. Menghina\n9. Benci\n10. Bye\n";
}

// Status Mood Bot
void status_mood(int mood_waifu){
    std::cout<<"\n--- Status Jane Doe ---\n";
    std::cout<<"Mood saat ini: ";

    if(mood_waifu>=8)std::cout<<"Sangat Senang (Ayang~)\n";
    else if(mood_waifu>=5)std::cout<<"Senang\n";
    else if(mood_waifu>=3)std::cout<<"Biasa Saja\n";
    else std::cout<<"Buruk (Hati-Hati)\n";
}

// Menu Bye
bool menu_bye(std::string input, int mood_waifu){
    if(input=="Bye" || input=="bye"){
        if(mood_waifu>50)std::cout<<"Dadah, Senpai! Kapan-kapan ngobrol lagi ama aku yah~\n";
        else std::cout<<"Akhirnya pergi juga lu, gausah balik!\n";
        return true;
    }
    return false;  
}

// Kode utama
int main(){
    std::srand(time(0));
    
    /*
    int mood[3][15]={
    {3, 2, 1, 0, 4, 7, 6, 8, 5, 9, 11, 13, 14, 10, 12},
    {-1, -2, -3, -4, -0, -8, -7, -5, -9, -6, -12, -13, -11, -14, -10},
    {-2, -3, -4, -1, 0, -5, -7, -8, -6, -9, -14, -11, -12, -13, -10}
    };
    */

    int trait_id=1;
    int affinity=1;
    int mood_waifu=5;
    std::string input;

    std::cout<<"Selamat Datang di Program ChatBot Waifu: 'Jane Doe 4'\nSilahkan Ikuti Program Berikut.\n";

    while(mood_waifu>0){
        tampilan_menu();
        status_mood(mood_waifu);
        std::cout<<"\nStatus -> Mood: "<<mood_waifu<<" | Affinity: "<<affinity<<std::endl;
        std::cout<<"\nMasukkan pilihan (ex: Halo): ";
        std::cin>>input;
        
        if(menu_bye(input, mood_waifu)) break;

        int id_menu=dapatkan_menu_id(input);

        if(id_menu!=-1){
            std::string kalimat_jane=ambil_respon(trait_id, id_menu, affinity, mood_waifu);
            std::cout<<"Jane Doe: "<<kalimat_jane<<std::endl;
        
            if(id_menu<=2){
                if(affinity<10) affinity++;
                if(mood_waifu<10) mood_waifu+=2;
            }else{
                mood_waifu-=1;
            }
        }else{
            std::cout<<"Jane Doe: Hah? ngomong apa sih?\n";
        }

        if(mood_waifu<=0){
            std::cout<<"\nJane Doe: Gak mau ngomong lagi sama kamu! (Koneksi Putus)\n";
            break;
        }
    }
    return 0;
}