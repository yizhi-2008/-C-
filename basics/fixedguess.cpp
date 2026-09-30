#include "iostream"
#include "windows.h"
using namespace std;

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	int a;
	string again="y";
	cout <<"欢迎来到猜数字游戏"<<"请输入一个1~100的数字"<<endl;
	cin>>a;
	cin.clear();//这里要clear一下，已失效的cin无法进行ignore的操作
	cin.ignore(1000000,'\n');
	while(a<1||a>100||cin.fail()) {
		cout <<"请正确输入"<<endl;
		cin.clear();
		cin.ignore(100000,'\n');
		cin>>a;
		cin.ignore(10000000,'\n');
		while(again == "y"||again =="Y") {
			if(a == 9) {
				cout <<"恭喜你猜对了"<<endl;
				return 0;
			} else {
				cout<<"猜错了"<<endl;
				cout<<"请点击回车键重新开始"<<endl;
				cin.get();
				cout <<"是否重新开始(y/N)"<<endl;
				cin>>again;
				while(again != "y"&&again !="Y"&&again !="n"&&again !="N") { //应该用&&链接
					cout <<"您的输入有误，请重新输入"<<endl;
					cin.clear();
					cin>>again;
				}
			}
		}
	}
}