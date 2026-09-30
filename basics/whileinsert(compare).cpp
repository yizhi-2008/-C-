#include "iostream"
#include "windows.h"

int main() {
	SetConsoleOutputCP(65001);
	int num1 = 1;
	while(num1 <= 5) {
		int num2=1, num3=1;
		std::cout << "开始第" << num1 << "天自律" << std::endl;
		num1++;
		while(num2 <= 3) {
			std::cout << "开始做第" << num2 << "个俯卧撑" <<std::endl;
			num2++;
		}
		while(num3 <= 4){
			std::cout << "开始做第" << num3 << "个400米冲刺" <<std::endl;
			num3++;
		}
	}
}