#include<iostream>
using namespace std;
string login;
int nyawa=2;
int main(){
    cout<<"Selamat Datang di Program Perulangan Quest 2: 'Passwordnya'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    cout<<"Masukkan Password: ";
    cin>>login;
    
    while(login!="kopi123" && nyawa>0){
        cout<<"Nyawa Kamu Tersisa:"<<nyawa<<"\nSaran: Sebaiknya Kamu Lebih Teliti dengan Passwordmu!"<<endl;
        cout<<"Masukkan Password: ";
        cin>>login;
        nyawa--;
    }
    if(login=="kopi123"){
        cout<<"Login Berhasil!";
    }else{
        cout<<"Login Gagal. Kamu penyusup ya?!";
    }
    
    return 0;
}

//ini pake else if, ngga else aja
/*
#include<iostream>
using namespace std;
string login;
int nyawa=2;
int main(){
    cout<<"Selamat Datang di Program Perulangan Quest 2: 'Passwordnya'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    cout<<"Masukkan Password: ";
    cin>>login;
    
    while(login!="kopi123" && nyawa>0){
        cout<<"Nyawa Kamu Tersisa:"<<nyawa<<"\nSaran: Sebaiknya Kamu Lebih Teliti dengan Passwordmu!"<<endl;
        cout<<"Masukkan Password: ";
        cin>>login;
        nyawa--;
    }
    if(login=="kopi123"){
        cout<<"Login Berhasil!";
    }else if(nyawa>=0){
        cout<<"Login Gagal. Kamu penyusup ya?!";
    }
    
    return 0;
}
*/