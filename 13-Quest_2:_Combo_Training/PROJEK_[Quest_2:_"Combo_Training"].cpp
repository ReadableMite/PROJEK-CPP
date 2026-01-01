#include<iostream>
using namespace std;
int main(){
    int jumlah_combo, jumlah_stamina=100, stamina_kurang=15;
    cout<<"Shiny day, isn't it?\nWell...I guess you want to upgrade your skill- if you want to beat undead out there, so you must become a strongest person in the world.\n"<<endl;
    cout<<"\nGo To The Training Hall\n"<<endl;
    cout<<"Masukkan jumlah berapa kali training: ";
    cin>>jumlah_combo;
    for(int i=1;i<=jumlah_combo;i++){
        cout<<"SLASH!\n";
        jumlah_stamina=jumlah_stamina-stamina_kurang;
        
        if(jumlah_stamina<0){
            cout<<"Stamina kamu kurang...\n";
            jumlah_stamina=jumlah_stamina+stamina_kurang;
            break;
        }else{
            cout<<" \n";
        }
    }
    cout<<"Stamina kamu tersisa "<<jumlah_stamina<<endl;
    
    return 0;
}