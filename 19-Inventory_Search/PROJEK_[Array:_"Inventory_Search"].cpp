#include<iostream>
using namespace std;
int main(){
    string inventory[20] = {
    "Pedang Karatan", "Pedang Excalibur", "Pedang Masamune", "Pedang Muramasa",
    "Pedang Api Inferno", "Pedang Es Nordik", "Pedang Kayu Latihan", "Pedang Bambu",
    "Pedang Perak", "Pedang Emas Kerajaan", "Pedang Ksatria Hitam", "Pedang Cahaya Suci",
    "Pedang Patah", "Pedang Pendek", "Pedang Raksasa", "Pedang Melengkung",
    "Pedang Samurai", "Pedang Bayangan", "Pedang Kristal", "Pedang Beracun"
    }, cari;
    bool ketemu=false;
    
    cout<<"Selamat Datang di Program Array: 'Inventory Search'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    cout<<"Masukkan nama item: ";
    cin.ignore();
    getline(cin, cari);
    
    for(int i=0;i<20;i++){
        if(inventory[i].find(cari)!=string::npos){
            ketemu=true;
            cout<<"Item yang dicari: "<<inventory[i]<<endl;
        }
    }
    if(ketemu==false){
        cout<<"Item tidak ditemukan.\n";
    }
    return 0;
}