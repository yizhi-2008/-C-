#include "iostream"
#include "random"
#include "windows.h"

int main(){
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	std::string again = "y";
	while(again == "y" || again == "Y"){
	std::random_device count;
	std::mt19937 shuziji(count());
	std::uniform_int_distribution<int> fenbushuziji(1,10);
	int a = fenbushuziji(shuziji);
	std::cout << "欢迎来到猜数字游戏" << "请输入1-10的整数参与猜数字吧" << std::endl;
    int b;
    std::cin >> b;
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    for(;std::cin.fail() || b < 1 || b > 10;){                              /*>>/ignore/getline混用，导致出错，ignore会清理掉正确的输出，需要输入两遍才能运行
                                                                                 建议都用getline，再用int转换成整数类型
    	std::cout << "你的输入有误，请重新输入" << std::endl;
    	std::cin.clear();
    	std::cin.ignore(100000,'\n');
    	std::cin >> b;
    	std::cin.ignore(10000,'\n');
	}
	for(;b == a;){
		std::cout << "恭喜你，猜对了！" <<std::endl;
		break;
	}
	for(;b != a;){
		std::cout << "猜错了！" <<std::endl;
		break;
	}
	std::cout << "再来一局吗？（按下回车键选择（y/n））" << std::endl;
    std::cin.clear();
	//std::cin.ignore(10000,'\n');//此时已经是空的了，过多使用ignore导致随后输入内容被清除
	std::getline(std::cin,again);
	for(;again != "y" && again != "Y" && again != "n" && again != "N";){
		std::cout << "您的输入有误，请重新输入吧!" <<std::endl;
		std::cin.clear();
		std::cin.ignore(100000,'\n');
		std::cin >> again;
		std::cin.ignore(10000,'\n');//while读取了y和\n导致判断出错
	}
}
    std::cout << "游戏结束，感谢游玩" <<std::endl;
}