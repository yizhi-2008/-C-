#include <iostream>
#include "string"
#include <windows.h>
#include <random>

int main() {
	bool again = true;
	while(again) {
		again = false;
		SetConsoleOutputCP(65001);
		SetConsoleCP(65001);
		std::cout << "欢迎来到猜数字游戏" << "\n" << "请输入1-10的数字进行游戏吧！" <<std::endl;
		std::random_device seed;
		std::mt19937 shuzi(seed()) ;
		std::uniform_int_distribution<int> shuziji(1,10);
		int result = shuziji(shuzi);
		//std::cout << result;      不急着去把答案数字设置出来，而是应该检验用户输入的内容是否合法，即符合逻辑和代码运行1111111111
//	std::string a;
//	getline(std::cin,a);
//	int b = stoi(a);
		//std::cout << b <<std::endl;
		//std::string a;
//	getline(cin,a);    这些应该放在循环里面，重置，如果是for循环不用111111111111111111111
		bool ok = true;
		int b;
		while(ok) {
			ok = false;
			std::string a;
			getline(std::cin,a);
			bool ok = true;
			if(a.length() == 0) {
				std::cout << "请输入内容" << std::endl;
				ok = true;
			}
			for(int i = 0; i < a.length(); i++) {
				if(a[i] < '0' || a[i] > '9') {                      //字符‘’，字符串“”，字符和字符串之间不能比较
					std::cout << "你输入的不是数字，请重新输入吧" <<std::endl;
					ok = true;
				} else {
					break;
				}
			}
			//	int b = stoi(a);                                            在这里才声明b，使得在下一个循环中，无法使用
			b = stoi(a);
			while(b < 1 || b > 10) {) { //不能用||来逻辑连接，否则一直循环
			std::cout << "不清楚你的意思呢，请正确输入吧！" << std::endl;
				std::cout << "您输入的数字不在所猜数字的范围之内呢" << std::endl;
				//	std::cin.ignore(10000,'\n');
				getline(std::cin,a);
				if(a.length() == 0) {
					std::cout << "请输入内容" << std::endl;
					ok = true;
				}
				for(int i = 0; i < a.length(); i++) {
					if(a[i] < '0' || a[i] > '9') {                      //字符‘’，字符串“”，字符和字符串之间不能比较
						std::cout << "你输入的不是数字，请重新输入吧" <<std::endl;
						ok = true;
					} else {
						break;
					}
				}
				b = stoi(a);
				ok = true;
			}
		}
		if(b == result) {
			std::cout << "恭喜你，猜对了" << std::endl;
		} else {
			std::cout << "太可惜了，猜错了！" << std::endl;
		}
		std::string c;
		std::cout << "再来一局吗？" << "输入（y/n）" << std::endl;
		//std::cin.get();
		getline(std::cin,c);
		while(c != "y" && c != "n"
			//	std::cin.ignore(10000,'/n');
			getline(std::cin,c);
		}
		if(c == "y") {
			again = true;
		} else {
			again = false;
		}
	}
}