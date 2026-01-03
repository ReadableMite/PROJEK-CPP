#include<iostream>
using namespace std;
int main(){
    string pilihan, jenis_serangan, lanjut_jalan;
    int jalan, total_jalan=1000, stamina=100, stamina_jalan, stamina_tebang=10, tebang, serangan, stamina_serangan=15, heal=1, hunger=0, makan=1, hit_mc=15, hit_undead=20, hp_mc=100, hp_undead=100;
    cout<<"Adventurer, today you will be start your own Journey.\n";
    
    do{
        cout<<"\n=== Start your Journey! ===\n";
        cout<<"1. Walk to Camp\n2. Cutdown some trees\n3. Fight Undeads\n4. Exit\n"<<endl;
        cout<<"Enter choice: ";
        cin>>pilihan;
        
//=======================================================================================
        
        //Pilihan 1
        if(pilihan=="1"){
            cout<<"--- Walk to Camp (Jarak: "<<total_jalan<<"m | Stamina: "<<stamina<<") ---\n";
            do{
                cout<<"\nMasukkan jumlah perjalanan (meter): ";
                cin>>jalan;
                
                if(stamina<jalan){
                    cout<<"\n[!] Stamina habis! (Sisa: "<<stamina<<"). Kamu lemas.\n";
                    cout<<"Ketik 1 untuk Heal (+60): ";
                    cin>>heal;
                    if(heal==1){
                        stamina += 60;
                        cout<<"Stamina pulih! Sekarang: "<<stamina<<"\n";
                    }else{
                        cout<<"Kamu pingsan karena kelelahan...Kembali ke menu.\n";
                        break;
                    }
                }
                
                if(stamina>=jalan){
                    if(jalan>total_jalan){
                        jalan=total_jalan;
                    }
                    
                    total_jalan-=jalan;
                    stamina_jalan=jalan;
                    stamina-=stamina_jalan;
                
                    cout<<"Berhasil jalan "<<jalan<<"m. Sisa: "<<total_jalan<<"m | Stamina: "<<stamina<<"\n";
                    
                    if(total_jalan<=0){
                        cout<<"Hore! Kamu sampai di Camp. Selamat atas kerja kerasmu!\n";
                        break;
                    }
                    
                    cout<<"Lanjut berjalan? (lanjut/tidak): ";
                    cin>>lanjut_jalan;
                } 
            }while(lanjut_jalan=="Lanjut" || lanjut_jalan=="lanjut");

//=======================================================================================

        //Pilihan 2
        }else if(pilihan=="2"){
            cout<<"--- Cutdown some trees ---\n"<<endl;
            do{
                cout<<"Ketik jumlah untuk menebang (0 cancel): ";
                cin>>tebang;
                
                if(tebang==0){
                    break;
                }else if(stamina<=0){
                    cout<<"[!] Stamina kamu habis, ketik 'makan' untuk mengisi tenagamu.\nMakan? (ketik 1) ";
                    cin>>makan;
                    if(makan==1){
                        stamina+=30;
                        hunger-=30;
                        cout<<"Stamina kamu bertambah [+30] | Stamina   : "<<stamina<<endl;
                        cout<<"Hunger kamu berkurang [+30]  | Hunger    : "<<hunger<<endl;
                    }else{
                        cout<<"Kamu kelaparan dan kelelahan...Kamu mati...\n";
                    }
                    
                }else if(stamina>0){
                    for(int i=0;i<tebang;i++){
                        cout<<"BUK! 'Kamu mendapatkan [+1] kayu'\n";
                    }
                    stamina=stamina-(stamina_tebang*tebang);
                    hunger=hunger+(stamina_tebang*tebang);
                }else if(tebang==0){
                    break;
                }
            }while(tebang>0);
            
//=======================================================================================
            
        //Pilihan 3
        }else if(pilihan=="3"){
            hp_undead=100;
            
            do{
                cout<<"\n--- Fight Undead ---\n"<<endl;
                cout<<"Pilihan Aksi:\n1. Serangan biasa/tunggal\n2. Serangan beruntun\n3. Kabur\n\nApa pilihanmu? ";
                cin>>jenis_serangan;
                
                if(jenis_serangan=="3"){
                break;
                }
                
                if(stamina>=0){
                    if(hp_mc<=0){
                        cout<<"Kamu mati...Kenanganmu akan selalu ada, Adventurer!\n";
                        break;
                    }else if(hp_mc>0){
                        if(jenis_serangan=="1"){
                            cout<<"SLASH!\n";
                            stamina-=stamina_serangan;
                            hp_undead-=hit_mc;
                        }else if(jenis_serangan=="2"){
                            cout<<"Masukkan jumlah serangan beruntun: ";
                            cin>>serangan;
                            if(serangan>5){
                                cout<<"Serangan beruntun tidak bisa dilakukan lebih dari 5 combo.\n";
                                stamina+=stamina_serangan;
                                hp_undead+=hit_mc;
                            }else if(serangan<=5){
                                for(int i=0;i<serangan;i++){
                                    if(stamina<stamina_serangan){
                                    cout<<"[!] Stamina kamu habis, ketik '1' untuk memulihkan stamina.\n";
                                    cin>>heal;
                                    if(heal==1){
                                        stamina+=60;
                                        cout<<"Stamina kamu bertambah [+60] | Stamina: "<<stamina<<endl;
                                    }else{
                                        cout<<"Kamu pingsan karena kelelahan...dan Undead menyerangmu sampai kamu mati.\n";
                                        break;
                                    }
                                    
                                    if(stamina>=stamina_serangan && hp_undead>0){
                                        stamina-=stamina_serangan;
                                        hp_undead-=hit_mc;
                                        cout<<"SLASH!\n";
                                        if(hp_undead==0){
                                            cout<<"Kamu menang melawan Undead! Selamat, Adventurer!\n";
                                            break;
                                        }else if(hp_undead<0){
                                            cout<<"HP Undead sudah tipis, kamu tidak perlu melakukan combo sebanyak itu...\n";
                                            break;
                                        }
                                        }
                                    }
                                }
                            }
                        }
                    }    
                    if(hp_undead>0){
                        hp_mc-=hit_undead;
                        cout<<"Kamu terkena serangan Undead, HP kamu tersisa "<<hp_mc<<endl<<"HP Undead: "<<hp_undead<<endl;
                    }
                }
            }while(hp_mc>0);
        }
            
    }while(pilihan!="4");
        
    return 0;
}