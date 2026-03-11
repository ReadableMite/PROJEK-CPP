#include <iostream>

void tampilkan(int input, int &meow){
	int lantai = input;

	for(int i = 1; i <= lantai; i++){
		std::cout << "Lantai " << i << ": ";
		for(int j = 1; j <= i; j++){
			std::cout << "Meow ";
			meow++;
		}
		std::cout << std::endl;
	}
}

int main(){
	int meow = 1;
	int input;

	std::cout << "Masukkan jumlah lantai: ";
	std::cin >> input;

	tampilkan(input, meow);
	if(input >= 3){
		std::cout << "Hore! Kamu telah mendapatkan " << meow << " Meow\n";
	}else{
		std::cout << "Yahh! Kamu belum mendapatkan 6 Meow\n";
	}
	return 0;
}
