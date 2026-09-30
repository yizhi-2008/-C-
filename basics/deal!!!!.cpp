#include <iostream>
#include <windows.h>
#include <random>
#include <string>

int main() {
	SetConsoleOutputCP(65001);
	std::random_device seed;
	std::mt19937 shuzi(seed());
//	std::uniform_int_distribution<int> shuziji(0,49);
	std::cout << "开始" << "\n" << "发牌" << std::endl;
	std::string suits[] = {"♠", "♥", "♦", "♣"};
	std::string ranks[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	std::string card[52];
	for(int i = 0 ; i < 52 ;  i++) {
		card[i] = suits[i / 13] + ranks[i % 13];
	}
	int king[52];
	for(int i = 0 ; i < 52 ; i++) {
		king[i] = i;
	}
	for(int i = 0 ; i < 52 ; i++) {
		std::uniform_int_distribution<int> shuziji(i,51);
		king[i] = shuziji(shuzi);
		std::swap(card[i],card[king[i]]);
	}
	std::string p1[13];
	std::string p2[13];
	std::string p3[13];
	std::string p4[13];
	for(int i = 0 ; i < 13 ; i++) {
		p1[i] = card[i];
		p2[i] = card[i+13];
		p3[i] = card[i+26];
		p4[i] = card[i+39];
		}
    for(std::string element : p1){
    	std::cout << element << std::endl;
	}
	std::cout << "这是第一个人的牌" <<std::endl;
	for(std::string element : p2){
    	std::cout << element << std::endl;
	}
	std::cout << "这是第二个人的牌" <<std::endl;
	for(std::string element : p3){
    	std::cout << element << std::endl;
	}
	std::cout << "这是第三个人的牌" <<std::endl;
	for(std::string element : p4){
    	std::cout << element << std::endl;
	}
	std::cout << "这是第四个人的牌" <<std::endl;
	return 0;
}