#include<iostream>

int hitung(int nilai1, char op, int nilai2, bool &isError){
    switch(op){
        case '+': return nilai1+=nilai2;
        case '-': return nilai1-=nilai2;
        case '*': return nilai1*=nilai2;
        case '/':
            if(nilai2==0){
                std::cout<<"Error: Pembagian nol!\n";
                isError=true;
                return nilai1;
            }else{
                return nilai1/=nilai2;
            }
        case '%': return nilai1%=nilai2;
        default:
            std::cout<<"Operator salah!\n";
            isError=true;
            return nilai1;
    }
}

int main(){

    int nilai1, nilai2;
    char op;
    bool isError=false;
    
    std::cout<<"\nInput: ";
    std::cin>>nilai1>>op>>nilai2;

    nilai1=hitung(nilai1, op, nilai2, isError);

    while(isError!=true){
        std::cout<<"\nInput: "<<nilai1;
        std::cin>>op>>nilai2;

        nilai1=hitung(nilai1, op, nilai2, isError);
    }
    
    return 0;
}