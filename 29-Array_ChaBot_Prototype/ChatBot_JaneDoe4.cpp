#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

// Daftar Menu
void tampilanMenu(std::string keyword[3][3]){
    std::cout<<"\n--- Daftar Menu ChatBot ---\n";
    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            std::cout<<"- "<<keyword[a][b]<<std::endl;
        }
    }
    std::cout<<"- Bye\n";
}

// Status Mood Bot
void statusMood(int mood_waifu){
    std::cout<<"\n--- Status Bot ---\n";
    std::cout<<"Mood: ";

    if(mood_waifu>80){
        std::cout<<"Ayangg~~ Jane Doe lagi seneng banget nih~\n";
    }else if(mood_waifu<=80 && mood_waifu>50){
        std::cout<<"Jane Doe seneng bisa ngobrol ama kamu :)\n";
    }else if(mood_waifu<=50 && mood_waifu>30){
        std::cout<<"Hmmm, lagi biasa aja sih...Cuacanya cerah nih, hehe~\n";
    }else if(mood_waifu<=30 && mood_waifu>20){
        std::cout<<"B aja kok.\n";
    }else if(mood_waifu<=20){
        std::cout<<"...\n";
    }
}

// Menu Bye
bool menuBye(std::string input, int mood_waifu){
    if(input=="Bye" || input=="bye"){
        if(mood_waifu>50){
            std::cout<<"Dadah, Senpai! Kapan-kapan ngobrol lagi ama aku yah~\n";
        }else if(mood_waifu>0){
            std::cout<<"Bye.\n";
        }else{
            std::cout<<"Akhirnya pergi juga lu, gausah balik!\n";
        }
        return true;
    }
    return false;  
}

// Kode utama
int main(){
    std::srand(time(0));
    std::string keyword[3][3]={
    {"Halo", "Sapa", "Tanya"}, {"Diam", "Jutek", "Marah"}, {"Jelek", "Menghina", "Benci"}
    }, respon[3][15]={
    {
    "Hai manis!", "Halo Senpai~", "Eh, Halo!", "Hai!", "Halo ganteng!", // Halo (0-4)
    "Sapa terus ya~", "Hai juga!", "Manis banget sih.", "Halo!", "Sapaanmu hangat.", // Sapa (5-9)
    "Tanya apa?", "Kepo ya?", "Mau tau banget?", "Tanya aja.", "Ada apa?" // Tanya (10-14)
    },
    {
    "Kenapa diam?", "Bosen ya?", "Ngomong dong.", "...", "Kok sepi?", // Diam (0-4)
    "Dih, jutek.", "Gak asik!", "Kenapa gitu?", "Jahat.", "Singkat amat.", // Jutek (5-9)
    "Sabar dong.", "Jangan marah.", "Ngeri ah.", "Galak amat.", "Duh, emosi." // Marah (10-14)
    },
    {
    "Jahat banget!", "Tega kamu!", "Aku benci!", "Hiks..", "Jahat!", // Jelek (0-4)
    "Berhenti!", "Gak sopan!", "Sakit tau!", "Cukup!", "Pergi sana!", // Menghina (5-9)
    "Sama.", "Sana pergi.", "Gak peduli.", "Terserah.", "Tutup pintunya." // Bye (10-14)
    }
    }, input;
    int mood[3][15]={
    {3, 2, 1, 0, 4, 7, 6, 8, 5, 9, 11, 13, 14, 10, 12},
    {-1, -2, -3, -4, -0, -8, -7, -5, -9, -6, -12, -13, -11, -14, -10},
    {-2, -3, -4, -1, 0, -5, -7, -8, -6, -9, -14, -11, -12, -13, -10}
    }, mood_waifu=50;

    std::cout<<"Selamat Datang di Program ChatBot Waifu: 'Jane Doe 3'\nSilahkan Ikuti Program Berikut.\n";

    while(mood_waifu>0){
        tampilanMenu(keyword);
        statusMood(mood_waifu);
        std::cout<<"Mood Jane Doe: "<<mood_waifu<<std::endl;
        std::cout<<"\nMasukkan pilihan (ex: Halo): ";
        std::cin>>input;
        
        if(menuBye(input, mood_waifu)){
            break;
        }
        if(mood_waifu<=0){
            std::cout<<"Aku ngga mau ngomong sama kamu. Huft!!\n";
            break;
        }

        
        bool ketemu=false;
        if(mood_waifu>0){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(input==keyword[i][j]){
                        int acak=std::rand() % 5;
                        int idx_kolom=(j*5)+acak;
                        
                        std::cout<<"Jane Doe: "<<respon[i][idx_kolom]<<std::endl;
                        ketemu=true;
                        mood_waifu+=mood[i][idx_kolom];
                    }
                }
            }
        }
        if(input=="Gift" || input=="gift"){
        mood_waifu=100;
        std::cout<<"Eh....Makasih >///<\n";
        ketemu=true;
        }
        if(ketemu==false && (input!="Gift" && input!="gift") && (input!="Bye" && input!="bye")){
            std::cout<<"Jane Doe: Hah? Ngomong apa sih?\n// Perintah tidak ditemukan.\n";
            mood_waifu-=1;
            break;
        }
    }
    return 0;
}