#include <iostream>
#include <string>
#include <windows.h>
#include <random>

int main() {
	SetConsoleOutputCP(65001);
	std::cout <<"发牌！！！" << std::endl;
	std::random_device seed;
	std::mt19937 shuzi(seed());
//	std::uniform_int_distribution<int> shuziji(1,100);
//	for(int i = 1; i <= 10;i++){
//		std::cout << shuziji(shuzi) << std::endl;
//	}
	std::string suits[] = {"♠", "♥", "♦", "♣"};
	std::string ranks[] = {	"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	std::string card[52];
	std::string suit,rank;
//	for(int i = 0 ; i < 52 ; i++) {
//		suit = suits[i / 13];
//		rank = ranks[i % 13]; // 创建了一个52 张牌的数组03948713
//		card[i] = suit[i] + ranks[i];
//	}
//
   
    for(int i = 0 ; i < 52; i++){
    	card[i] = suits[i / 13] + ranks[i % 13];    	
	}
    
	std::string p1[13];
	std::string p2[13];
	std::string p3[13];
	std::string p4[13];



	int king[52];
	for(int i = 0 ; i < 52 ; i++) {
		king[i] = i;
	}                                      //这是fisher yates的打乱程序
	for(int k = 0; k < 52 ; k++ ) {
		std::uniform_int_distribution<int> shuziji(k,51);
		int j = shuziji(shuzi);
		std::swap(king[k],king[j]);
	}


	for(int i = 0; i < 13; i++) {
		p1[i] = card[king[i]];
	}

	for(int i = 13; i < 26; i++) {
		p2[i - 13] = card[king[i]];
	}

	for(int i = 26; i < 39; i++) {
		p3[i - 26] = card[king[i]];
	}

	for(int i = 39; i < 52; i++) {
		p4[i - 39] = card[king[i]];
	}

	std::cout << "这是第一位牌友的牌" << std::endl;

	for(std::string element : p1) {
		std::cout << element << std::endl;
	}

	std::cout << "这是第一位牌友的牌" << std::endl;

	for(std::string element1 : p2) {
		std::cout << element1 << std::endl;
	}

	std::cout << "这是第二位牌友的牌" << std::endl;

	for(std::string element2 : p3) {
		std::cout << element2 << std::endl;
	}

	std::cout << "这是第三位牌友的牌" << std::endl;

	for(std::string element3 : p4) {
		std::cout << element3 << std::endl;
	}

	std::cout << "这是第四位牌友的牌" << std::endl;

}