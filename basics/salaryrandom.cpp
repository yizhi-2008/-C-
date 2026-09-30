#include <iostream>
#include <string>
#include <windows.h>
#include <random>

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	std::cout << "开始发工资了" << std::endl;
//	bool again = true;
//	while(again){
//		std::random_deivce seed;
//		std::random_device seed1;
//		std::mt19937 shuzi(seed);
//		std::mt19937 shuzi(seed1);
//		std::uniform_int_distribution<int> shuziji(1,10);
//		std::uniform_int_distribution<int> shuziji1(10000,20000);
	//std::cout << "开始发工资了" << std::endl;
//	int result = shuziji(shuzi);
//	int result = shuziji1(shuzi1)
	for(int i = 1; i <= 20; i++) {
		std::random_device seed;
		std::random_device seed1;
		std::mt19937 shuzi(seed());
		std::mt19937 shuzi1(seed1());
		std::uniform_int_distribution<int> shuziji(1,10);
		std::uniform_int_distribution<int> shuziji1(10000,20000);
		int result = shuziji(shuzi);
		int result1 = shuziji1(shuzi1);
		std::cout << "给第" << i << "位员工发奖金，" << std::endl;
		if(result <= 5) {
			std::cout << "你表现优越，给你发" << result1 << "元。" << std::endl;
		} else {
			std::cout << "你表现不好,不给你发钱" << std::endl;
		}
	}
}
