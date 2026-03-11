#include <iostream>

void tampilkan(int input){
	int meow=1;
	meow+=input;
	for(int i = 0; i <= meow; i++){
		std::cout << "Meow\n"; 
	}
}

int main(){
	int input;

	std::cout << "Masukkan jumlah Meow: ";
	std::cin >> input;

	tampilkan(input);
	return 0;
}
