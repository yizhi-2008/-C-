#include "iostream"
#include "random"
#include "windows.h"


int main() {
	SetConsoleOutputCP(65001);
	bool again = true;
	int count = 0;
	while(again) {
		std::random_device seed;
		std::mt19937 gen(seed());
		std::uniform_int_distribution<int> range(1,1000);
		int result = range(gen);//有一种映射关系，gen（）里面的数被映射到（1,100）中了
		//std::cout << result<<std::endl;
	//	int count;每一循环都会重新赋值
		count++;
		if(result == 13) {
			std::cout <<"第"<< count <<"次" <<"终于一生一世我爱你"<<std::endl;
			again = false;
		}
	}
}