#include "iostream"
#include "windows.h"
#include "string"
using namespace std;

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	cout << "欢迎来到猜数字游戏！"<<endl;
	cout << "请输入一个数字（1-100）" <<endl;
	int a;
	string again = "y";
//	cin.ignore(10000,'\n');//放在开头会直接吞掉第一次输入的内容
	while(again == "y" || again == "Y") {
		cin >> a;
		while(a < 1 ||a > 100 || cin.fail()) {
			cout << "输入错误，请重新输入吧！" <<endl;
			cin.clear();
			cin.ignore(1000000,'\n');
			cin >> a;
			cin.ignore(1000000,'\n');
		}
		if(a == 9) {
			cout << "恭喜你，猜对了！" <<endl;
			return 0;
		} else {
			cout << "不好意思，猜错了！" << "按下回车键重新开始吧！" <<endl;//加一个\n试试
			cin.clear();
			cin.ignore(1000000,'\n');
			cin.get();
			cout << "输入（y/n）选择继续活着退出"<<endl;
			cin >> again;
			cin.clear();
			cin.ignore(1000000,'\n');
			while(again != "y" && again != "Y" && again!= "n" && again != "N") {
				cout << "输入错误，请重新输入"<<endl;
				cin >> again;
				cin.clear();
				cin.ignore(1000000,'\n');
			}
		}
	}
}