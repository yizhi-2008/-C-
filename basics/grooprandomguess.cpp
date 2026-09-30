#include <iostream>
#include <windows.h>
#include <string>
#include <random>

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
//	std::random_device seed;
//	std::mt19937 shuzi(seed());
//	std::uniform_int_distribution<int> shuziji(1,100);
//	int result = shuziji(shuzi);
	std::cout << "欢迎来到猜数字游戏" << "\n" << "你有十次输入机会，每次输入的数字都会和不同数比较" << std::endl;
	std::string a;
	std::string gen[10];
	int count ;
	//int gen1[10];
loop:
//	while(true) {
	count = 0;
	for(int k = 0; k < 10; k++) {
		getline(std::cin,a);
		gen[k] = a;
	}
	for(int i = 0; i < a.length() ; i++) {
		if(a[i] < '0' || a[i] > '9') {             //注意遍历时时字符的比较，用"01896597
			std::cout << "你的输入有误，请重新输入吧！" << std::endl;
			//getline(std::cin,a)
			goto loop;     //循环会立即停下  789871342987
		}
	}
	int gen1[10];
	for(int l = 0; l < 10; l++) {                        //这一步开始获取整型数字了3409872117109
		gen1[l] = stoi(gen[l]);    //跳出循环之后，才开始检验是否猜对108579887590173
		while(gen1[l] < 1 || gen1[l] >100) {
			std::cout << "输入了超出范围的数，请重新输入吧！" << std::endl;
			goto loop;
		}
	}
	for(int j = 0; j < 10; j++) {                                                    //  这里数组生成完毕，开始检验30914783798
		std::random_device seed;
		std::mt19937 shuzi(seed());
		std::uniform_int_distribution<int> shuziji(1,10);
		int result = shuziji(shuzi);
		if(gen1[j] == result ) {
			count++;
		}
	}
//		break;
//	}
    std::cout << count << std::endl;
	return 0;
}