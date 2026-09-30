#include "iostream"
#include "windows.h"
#include "string"
using namespace std;

int main(){
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	cout <<"欢迎来到猜扑克牌游戏"<<"点击回车键以开始游戏吧"<<endl;
	cin.get();
	cout <<"请输入一个1~10的数字"<<endl;
	int num1;
	cin>>num1;
	cin.ignore(2000,'\n');
	while(num1 <1 || num1 > 10 || cin.fail()){
		cout <<"输入错误，请重新输入"<<endl;
		cin>>num1;
		cin.clear();
		cin.ignore(2000,'\n');
	}
	cout <<"请再输入你想要选的颜色（红色/黑色）"<<endl;
	std::string color;
	cin>>color;
	cin.ignore(2000,'\n');
//注意&&和||的用法，否则会输出false	
	while(color != "黑色" && color != "红色" || cin.fail()){
		cout <<"输入错误，请重新输入吧"<<endl;
		getline(cin,color);
	}
	string form;
	if(color == "红色"){
		cout <<"请选择图案（红桃/方块）"<<endl;
		(cin,form);
		while(form != "红桃" || form != "方块" ||cin.fail()){
			cout <<"输入错误请重新输入"<<endl;
		}
	}
	else if(color == "黑色"){
		cout <<"请输入你想要选的图案（黑桃/梅花）"<<endl;
		getline(cin,form);
		while(form != "黑桃" && form != "梅花" ||cin.fail()){
			cout <<"输入错误，请重新输入"<<endl;
			getline(cin,form);
		}
	}
	if(num1 == 9 && color == "黑色"&&form == "黑桃"){
		cout <<"恭喜你，猜对了"<<endl;
	}else{
		cout<<"猜错了"<<endl;
	}
}