#include <iostream>
#include <random>
#include <string>
#include <windows.h>


int main() {
	SetConsoleOutputCP(65001);
	int gen[10];
	for(int i = 0; i < 10; i++) {
//		int gen[10];
		std::random_device seed;
		std::mt19937 shuzi(seed());
		std::uniform_int_distribution<int> shuziji(1,100);
		int result = shuziji(shuzi);
		gen[i] = result;
	}
	int a = gen[0];
	int b = gen[0];
	for(int i = 0; i < 10; i++ ){
//		std::cout << element << std::endl;
        std:: cout << gen[i] << std::endl;
        if(gen[i] > gen[0]){
        	a = gen[i];
		}
		else if(gen[i] < gen[0]){
			b = gen[i];
		}
	}
	std::cout << "最大值是" << a << "\n" << "最小值是" << b << std::endl;
}