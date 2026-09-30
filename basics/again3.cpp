#include "iostream"
#include "windows.h"
#include "string"
using namespace std;

int main(){
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	int a;
	string again="y";
	while(again == "y"||again == "Y"){
		cout << "欢迎来到猜数字游戏" << "请输入你想选择的数字（1-100）"<<endl;
		cin >> a;
		while(a<1 || a>100|| cin.fail()){
			cout << "输入错误，请重新输入吧" <<endl;
			cin.clear();
			cin.ignore(100000,'\n');
		}
		if(a == 9){
			cout << "恭喜你，猜对了！" <<endl;
			return 0;
		}else{
			cout << "猜错了!"<<endl;
		}
		cout << "按下回车键重新开始游戏吧！"<<endl;
		cin.get();
		cout << "是否重新开始游戏？（y/n）"<<endl;
		cin>>again;
		while(again != "y"&&again != "Y"&&again !="n"&&again != "N"){
			cout << "输入错误，请重新输入吧！"<<endl;
			cin.clear();
			cin.ignore(100000,'\n');
			cin >> again;
		}
	}
	cout << "游戏结束，感谢游玩！"<<endl;	
}