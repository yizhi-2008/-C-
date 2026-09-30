#include <iostream>
#include <windows.h>

int main() {
	int num1=1;//num2=1,num3=1写在外面的时候，num2和num3就会一直是2和3，会陷入死循环，因为num2已经大于三了
	SetConsoleOutputCP(65001);
	bool again = true;
	while(again) {
		int num2=1,num3=1;
		bool again1 = true;
		bool again2 = true;
		std::cout <<"今天是减肥的第" << num1 <<"天"<<std::endl;
		while(again1) {
			std::cout << "开始做第" << num2 << "个俯卧撑" <<std::endl;
			num2++;
			if(num2 == 3) {
				again1 = false;
			}
		}
		while(again2) {
			std::cout << "开始做第" << num3 << "次400米冲刺" <<std::endl;
			num3++;
			if(num3 == 4) {
				again2 = false;
			}
		}
		num1++;
		if(num1 == 5) {
			again = false;
		}
	}
}

