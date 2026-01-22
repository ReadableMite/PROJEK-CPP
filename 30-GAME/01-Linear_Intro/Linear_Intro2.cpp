#include<iostream>
#include<string>

// ANSI STYLE
const std::string BOLD = "\033[1m";
const std::string ITALIC = "\033[3m";
const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

std::string player;

// ===== UTIL =====
void tungguEnter(){
    std::string enter;
    std::cout << "\n[Tekan ENTER untuk melanjutkan...]";
    std::getline(std::cin, enter);
    std::cout << std::endl;
}

// ===== SCENE =====
void intro(){
    std::cout << "WARISAN TERAKHIR\n\n";
    std::cout << "Layar gelap.\n\n";
    std::cout << "Suara napas berat terdengar, diiringi bunyi mesin tua yang berdengung pelan.\n\n";

    std::cout << BOLD << "      [TIP: Gunakan tombol A / D untuk bergerak]      "
              << RESET << "\n\n";
    tungguEnter();
}

void sceneBunker(){
    std::cout << "Cahaya redup muncul. Sebuah bunker bawah tanah yang sempit dan lembap. "
                 "Lampu neon berkedip, hampir mati. Debu beterbangan di udara.\n\n";
    std::cout << "Seorang pemuda berdiri di dekat pintu besi. Tangannya masih kaku, "
                 "seolah baru terbangun dari tidur yang terlalu lama.\n\n";
    std::cout << "Di sudut ruangan, terdengar suara batuk.\n\n";
    tungguEnter();

    std::cout << "Kakek: \"Kh… khh… Nak…\"\n\n";

    std::cout << BOLD << "Masukkan Nama Player:" << RESET << " ";
    std::cin >> player;
    std::cin.ignore();
    std::cout << "\n";

    std::cout << "Seorang pria renta duduk di kursi kayu, tubuhnya dibungkus selimut lusuh. "
                 "Tangannya gemetar, tapi matanya masih tajam menatap pemuda itu.\n\n";
    tungguEnter();

    std::cout << "Kakek: \"Kau sudah bangun?\" tanyanya pelan.\n\n";
    tungguEnter();

    std::cout << ITALIC << "Kamu mendekat." << RESET << "\n\n";
    std::cout << BOLD << "      [TIP: Tekan W untuk lompat | S untuk menunduk]      "
              << RESET << "\n\n";
    tungguEnter();

    std::cout << player << ": \"Aku di sini, Kek.\"\n\n";
    tungguEnter();

    std::cout << "Pria itu tersenyum tipis.\n\n";
    std::cout << "Kakek: \"Bagus… hari ini kita harus cek pintu bunker. "
                 "Semalam aku dengar suara di luar.\"\n\n";
    tungguEnter();

    std::cout << BOLD << "      [OBJ: Temui Kakek (Tekan E untuk Interaksi)]      "
              << RESET << "\n\n";
    tungguEnter();

    std::cout << "Kakek: \"Kakimu jangan terlalu berisik.\"\n";
    std::cout << "Kakek: \"Undead masih suka berkeliaran di permukaan.\"\n\n";
    tungguEnter();

    std::cout << ITALIC << "Kamu mengangguk." << RESET << "\n\n";
}

void sceneSurface(){
    std::cout << "Kalian berhenti di depan pintu besi besar. "
                 "Angin dingin menyelinap dari celahnya.\n\n";

    std::cout << "Kakek: \"Aku akan menunggu di sini. Kau saja yang naik.\"\n\n";
    tungguEnter();

    std::cout << BOLD << "      [TIP: Tekan Shift untuk Lari | Ctrl untuk Sneak]      "
              << RESET << "\n\n";
    tungguEnter();

    std::cout << "Kamu menaiki tangga besi menuju permukaan.\n\n";
    std::cout << "Dunia luar menyambutmu dengan keheningan yang menyesakkan.\n";
    std::cout << "Gedung runtuh. Pohon mati. Bau busuk memenuhi udara.\n\n";
    tungguEnter();

    std::cout << BOLD << "      [OBJ: Ambil Kayu & Scrap Besi]      "
              << RESET << "\n\n";
    tungguEnter();

    std::cout << "Tiba-tiba, sebuah Undead muncul dari balik reruntuhan.\n\n";

    std::cout << BOLD << "      [COMBAT: Serangan Jarak Dekat | Perhatikan Stamina]      "
              << RESET << "\n\n";
    tungguEnter();

    std::cout << "Undead itu roboh ke tanah.\n\n";
    std::cout << ITALIC << "Napasmu terengah. Ini bukan latihan." << RESET << "\n\n";
    tungguEnter();
}

void sceneDeath(){
    std::cout << "Kamu turun kembali ke bunker.\n\n";
    std::cout << player << ": \"Kek, aku—\"\n\n";
    tungguEnter();

    std::cout << "Kata-katamu terhenti.\n\n";
    std::cout << "Pria renta itu terbaring di lantai. "
                 "Matanya terpejam. Wajahnya tenang.\n\n";
    tungguEnter();

    std::cout << player << ": \"Kek…?\"\n\n";
    tungguEnter();

    std::cout << "Mesin bunker terus berdengung.\n\n";
    tungguEnter();

    std::cout << ITALIC << "Beberapa waktu kemudian…" << RESET << "\n\n";
    tungguEnter();

    std::cout << "Kamu berdiri di depan gundukan tanah yang masih basah.\n\n";
    std::cout << "Suara itu kembali terngiang di kepalamu.\n\n";
    std::cout << ITALIC
              << "\"Dunia ini terlalu luas untuk dinikmati sendirian.\""
              << RESET << "\n\n";
    tungguEnter();

    std::cout << BOLD << GREEN
              << "      [QUEST BARU TERBUKA: Keluar ke Dunia Luar]      "
              << RESET << "\n\n";
}

// ===== MAIN =====
int main(){
    intro();
    sceneBunker();
    sceneSurface();
    sceneDeath();
    return 0;
}
