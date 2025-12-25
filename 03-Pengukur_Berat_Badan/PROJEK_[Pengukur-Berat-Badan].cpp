#include<iostream>
using namespace std;
int berat_badan;
int main(){
    cout<<"Selamat Datang di Program Berat Badan\nSilahkan isi  data berat badan Kamu!\n"<<endl;
    cout<<"Berat badan: ";
    cin>>berat_badan;
    
    cout<<"Saran: ";
    if(berat_badan>100){
        cout<<"Sebaiknya kamu lakukan diet, agar menghindari penyakit karena kamu sudah termasuk obesitas.";
    }else if(berat_badan>50){
        cout<<"Berat badan kamu masih ideal, lakukan olahraga rutin dan pola makan yang baik untuk menjaga berat badan idealmu.";
    }else if(berat_badan>20){
        cout<<"Berat badan kamu terlalu kurang, segera lakukan metode bulking untuk meningkatkan berat badan dan menjaga kestabilan tubuh.";
    }else{
        cout<<"Segera pergi ke Rumah Sakit atau Klinik terdekat dan minta diagnosis dokter, karena kamu sudah dalam kondisi malnutrisi yang parah.";
    }
    
    return 0;
}