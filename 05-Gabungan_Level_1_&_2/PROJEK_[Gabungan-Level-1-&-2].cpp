#include<iostream>
using namespace std;
string login, password="masuk123";
string nama, nim, alamat, univ, cita_cita;
int lanjut, umur, tahun_sekarang, tahun_lahir;
double berat_badan;
float tinggi_badan;
int main(){
    cout<<"Selamat Datang di Program Gabungan Level 1 dan 2 (Biodata, Kalkulator Tahun Lahir, Pengukur Berat Badan, dan Login Program.\nSilahkan ikuti sintruksi Program ini.\n"<<endl;
    
    //login
    cout<<"=====Login Page=====\n"<<endl;
    cout<<"Masukkan Password: ";
    getline(cin, login);
    
    if(login==password){
        cout<<"Login Sukses, Silahan Masuk ke Program Lainnya.\n"<<endl;
        
        cout<<"Ketik 1 untuk Lanjut, Ketik 0 untuk cancel: ";
        cin>>lanjut;
        cin.ignore();
        
        if(lanjut==1){
            cout<<"Loading...Sukses!\n";
        
        
            //Biodata
            cout<<"\n=====Biodata Mahasiswa=====\n"<<endl;
            cout<<"Masukkan Nama: ";
            getline(cin, nama);
            cout<<"Masukkan NIM: ";
            getline(cin, nim);
            cout<<"Masukkan Umur: ";
            cin>>umur;
            cout<<"Masukkan Berat Badan (kg): ";
            cin>>berat_badan;
            cout<<"Masukkan Tinggi Badan (cm): ";
            cin>>tinggi_badan;
            cin.ignore();
            cout<<"Masukkan Alamat: ";
            getline(cin, alamat);
            cout<<"Masukkan Instansi/Pendidikan: ";
            getline(cin, univ);
            cout<<"Masukkan Cita-Cita: ";
            getline(cin, cita_cita);
            cout<<endl;
    
            cout<<"Terima kasih, berikut merupakan biodata kamu.\n"<<endl;
            cout<<"=====Biodata Mahasiswa=====\n"<<endl;
            cout<<"Nama: "<<nama<<endl;
            cout<<"NIM: "<<nim<<endl;
            cout<<"Umur: "<<umur<<" tahun"<<endl;
            cout<<"Berat Badan: "<<berat_badan<<" kg"<<endl;
            cout<<"Tinggi badan: "<<tinggi_badan<<" cm"<<endl;
            cout<<"Alamat: "<<alamat<<endl;
            cout<<"Instansi/Pendidikan: "<<univ<<endl;
            cout<<"Cita-Cita: "<<cita_cita<<endl;
    
            //Kalkulator tahun lahir
            cout<<"\n==========\n";
            cout<<"\nSekarang tahun berapa? ";
            cin>>tahun_sekarang;
    
            tahun_lahir=tahun_sekarang - umur;
            cout<<"Maka tahun kamu lahir adalah: "<<tahun_lahir<<endl;
    
            //Pengukur Berat Badan
            cout<<"\n==========\n";
            cout<<"\nBerikut saran untuk berat badan Kamu.\n";
    
            cout<<"Saran: \n";
            if(berat_badan>100){
                cout<<"Kamu punya berat badan berlebih dan tergolong obesitas, lakukan diet rutin dan olahraga setiap hari untuk menjadi lebih sehat dan menghindari penyakit.\n";
            }else if(berat_badan>50){
                cout<<"Berat badan kamu ideal, lakukan olahraga rutin dan jaga pola makan untuk mempertahankan berat badan ideal kamu.\n";
            }else if(berat_badan>20){
                cout<<"Berat badan kamu tidak normal, segera lakukan metode bulking untuk menambah berat badanmu.\n";
            }else{
                cout<<"Berat badan kamu sangat tidak normal, segera pergi atau hubungi rumah sakit ataupun klinik terdekat dan minta diagnosa dari dokter karena kamu emngalami malnutrisi yang parah.\n";
            }
    
            cout<<"\n\nProgram Selesai.\n";
        
        }else{
            cout<<"Program Canceled\n";
        }
        
    }else{
        cout<<"Login Gagal, Silahkan Coba Lagi.\n"<<endl;
    }
    
    return 0;
}