#include<iostream>

int main(){

    std::string hitung;
    int nilai1, nilai2, hasil;

    std::cout<<"Masukkan angka 1: ";
    std::cin>>nilai1;

    std::cout<<"Masukkan operator (+,-,*,/,%): ";
    std::cin>>hitung;

    std::cout<<"Masukkan angka 2: ";
    std::cin>>nilai2;

    if(hitung=="+"){
        hasil=nilai1 + nilai2;
        std::cout<<"Hasil: "<<hasil<<std::endl;
    }else if(hitung=="-"){
        hasil=nilai1 - nilai2;
        std::cout<<"Hasil: "<<hasil<<std::endl;
    }else if(hitung=="*"){
        hasil=nilai1 * nilai2;
        std::cout<<"Hasil: "<<hasil<<std::endl;
    }else if(hitung=="/"){
        hasil=nilai1 / nilai2;
        std::cout<<"Hasil: "<<hasil<<std::endl;
    }else if(hitung=="%"){
        hasil=nilai1 % nilai2;
        std::cout<<"Hasil: "<<hasil<<std::endl;
    }
    
    return 0;
}