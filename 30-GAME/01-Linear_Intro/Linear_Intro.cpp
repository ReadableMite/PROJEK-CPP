#include <iostream>
#include <string>

using namespace std;

int main() {
    // --- DEKLARASI VARIABEL ---
    string playerName;
    string enterKey; // Digunakan khusus untuk fitur "Press Enter to Continue"

    // --- SCENE 1: ATMOSFER ---
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"          PROJECT KLANDESTIN: CHAPTER 0                  "<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"(Dingin...)"<<endl;

    cout<<"\n[Tekan ENTER untuk melanjutkan...]";
    getline(cin, enterKey);

    cout<<"\n(Hanya itu yang pertama kali kamu rasakan saat kesadaranmu mulai kembali.)"<<endl;

    cout<<"\n[Tekan ENTER untuk melanjutkan...]";
    getline(cin, enterKey);

    cout<<"\n(Bau mesiu yang pekat bercampur dengan aroma tanah basah menusuk indra penciumanmu.)"<<endl;

    cout<<"\n[Tekan ENTER untuk melanjutkan...]";
    getline(cin, enterKey);

    cout<<"\n(Di kejauhan, terdengar deru mesin tua yang terbatuk-batuk di balik badai pasir.)"<<endl;

    cout<<"\n(Pandanganmu kabur... Terdengar suara rintik hujan di kejauhan.)"<<endl;
    cout<<"(Bau besi berkarat dan tanah basah menusuk itu masih belum juga hilang.)"<<endl;
    
    cout<<"\n[Tekan ENTER untuk mencoba membuka mata...]";
    getline(cin, enterKey); // Trik sederhana buat bikin pacing game

    // --- SCENE 2: PERTEMUAN ---
    cout<<"\nSeorang gadis berambut perak duduk di depanku, membelakangi cahaya bulan."<<endl;
    cout<<"Dia mengenakan jaket usang dan memegang sebuah pisau kecil."<<endl;
    cout<<"\nGadis: \"Oh... Akhirnya bangun juga. Kupikir kamu sudah jadi santapan mutan.\""<<endl;

    cout<<"\n[Tekan ENTER untuk menjawab...]";
    getline(cin, enterKey);

    cout<<"\nGadis: \"Jangan banyak gerak dulu. Kepalamu habis terbentur keras.\""<<endl;
    cout<<"Gadis: \"Omong-omong, aku tidak bisa terus memanggilmu 'Hei'. Siapa namamu?\""<<endl;

    // --- INPUT NAMA ---
    cout<<"\n[Ketik namamu di sini]: ";
    getline(cin, playerName); // Mengambil nama lengkap (boleh pake spasi)

    // --- SCENE 3: JANE MERESPON ---
    cout<<"\nJane: \"" << playerName << "...?\""<<endl;
    cout<<"Jane: \"Nama yang aneh untuk seseorang yang ditemukan sekarat di sektor 7.\""<<endl;
    cout<<"Jane: \"Tapi terserahlah. Setidaknya itu lebih baik daripada mati sebagai anonim di bawah tumpukan besi tua ini.\""<<endl;
    
    cout<<"\n[Tekan ENTER untuk lanjut...]";
    getline(cin, enterKey);

    cout<<"\nJane: \"Dengarkan aku, "<<playerName<<". Tempat ini tidak aman.\""<<endl;
    cout<<"Jane: \"Aku tidak tahu siapa kamu, tapi karena aku sudah menyelamatkanmu...\""<<endl;
    cout<<"Jane: \"...maka nyawamu sekarang adalah tanggung jawabku.\""<<endl;
    cout<<"Jane: \"...\""<<endl;
    cout<<"Jane: \"Itu yang ingin kukatakan, tapi jika kamu ingin tetap disini, itu pilihanmu.\""<<endl;
    cout<<"Jane: \"Jika kamu ingin hidup, ambil tasmu dan ikuti aku.\""<<endl;

    cout<<"\nIkuti Jane Doe?"<<endl;
    cout<<"[Ketik pilihanmu (Ikut/Tidak)]: ";
    cin.ignore();
    getline(cin, enterKey);

    if(enterKey=="Tidak"){
        cout<<"Kamu mati karena entitas tidak dikenal\n";
        return 0;
    }else{
    cout<<"\nJane: \"Ayo bersiap, "<<playerName<<". Kita harus pergi sebelum 'mereka' datang.\""<<endl;

    // --- OUTRO ---
    cout<<"\n----------------------------------------------------------"<<endl;
    cout<<"          PROLOGUE SELESAI: "<<playerName<<" TELAH BANGUN"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    }
    return 0;
}