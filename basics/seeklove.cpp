#include "iostream"
#include "string"
#include "windows.h"
#include "random"

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
//	std::random_device seed;
//	std::mt19937 shuzi(seed());
//	std::uniform_int_distribution<int> shuziji(1,10);
//	int result = shuziji(shuzi);
	std::cout << "小美，我喜欢你！" << std::endl;
	bool again = true; 
	int count = 0  ;                                         //想要获取真爱，那么随机数生成也要放进循环，不然result就是不变的。1978436917834671
	while(again) {
		std::random_device seed;
		std::mt19937 shuzi(seed());
		std::uniform_int_distribution<int> shuziji(1,10000);
		int result = shuziji(shuzi);
		//std::cout << "小美，我喜欢你！" << std::endl;
		//int result = shuziji(shuzi);
		if(result == 1) {
			std::cout << "我也喜欢你" << std::endl;
			again = false;
		} else {
			std::cout << "对不起，我不喜欢你" << std::endl;
		}
//		std::cout << "再来一次吗少年？（y/n）" << std::endl;
//		std::string a;
//		getline(std::cin,a);
//		while(a != "y" && a!= "n") {
//			std::cout << "连回答的勇气都没有了吗？" << "\n" << "再次证明自己吧" << std::endl;
//			std::cin.clear();
//			getline(std::cin,a);
//			std::cin.ignore(10000,'\n');
//		}
//		if(a == "y") {
//			again = true;
//		} else {
//			again = false;
//		}
     count++;
	}
//	std::cout << count <<std::endl;
	std::cout << "第" << count << "次告白，终于seeklove" << std::endl;
}