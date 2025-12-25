#include<iostream>
using namespace std;
string makan;

int main(){
    cout<<"Selamat Datang di Program Perulangan While Quest 1: 'Nanya Udah Makan'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    cout<<"Udah makan atau belum?\n";
    cin>>makan;
    
    while(makan!="Udah" && makan!="udah" && makan!="sudah" && makan!="Sudah"){
        cout<<"Udah makan atau belum?\n";
        cin>>makan;
    }
}