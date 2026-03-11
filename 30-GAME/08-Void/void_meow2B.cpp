#include <iostream>

void tampilkan(int lantai, int &total_meow){
	total_meow = (lantai * (lantai + 1)) / 2;

	for(int i = 1; i <= lantai; i++){
		std::cout << "Lantai " << i << ": ";
		for(int j = 1; j <= i; j++){
			std::cout << "Meow ";
			total_meow++;
		}
		std::cout << "\n";
	}
}

int main(){
	int total_meow;
	int lantai;

	std::cout << "Masukkan jumlah lantai: ";
	std::cin >> lantai;

	tampilkan(lantai, total_meow);
	if(total_meow >= 3){
		std::cout << "Hore! Kamu telah mendapatkan " << total_meow << " Meow\n";
	}else{
		std::cout << "Yahh! Kamu belum mendapatkan 6 Meow\n";
	}
	return 0;
}
