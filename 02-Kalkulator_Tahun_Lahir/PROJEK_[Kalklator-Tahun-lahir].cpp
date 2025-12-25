#include<iostream>
using namespace std;
int tahun_lahir;
int tahun_sekarang, umur;

int main(){
    cout<<"Selamat Datang di Program Kalkulator Tanggal Lahir\nSilahkan isi Umur dan tahun kamu sekarang...\n"<<endl;
    cout<<"Umur: ";
    cin>>umur;
    cout<<"Tahun: ";
    cin>>tahun_sekarang;
    
    tahun_lahir=tahun_sekarang - umur;
    cout<<"Tahun Lahir kamu adalah: "<<tahun_lahir<<endl;
    
    return 0;
}