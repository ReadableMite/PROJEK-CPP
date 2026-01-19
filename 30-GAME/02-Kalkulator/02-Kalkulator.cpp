#include<iostream>

int main(){

    std::string hitung;
    int nilai1, nilai2, hasil;

    std::cout<<"Input (10 'enter' + 'enter' 10): ";
    std::cin>>nilai1>>hitung>>nilai2;

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