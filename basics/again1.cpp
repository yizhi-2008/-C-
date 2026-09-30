#include "iostream"
#include "windows.h"
#include "string"
using namespace std;

int main(){
	SetConsoleOutputCP(65001);
	string again = "y";
    
	while(again =="y"||again =="Y"){//这个循环在最外面
	cout <<"欢迎来到猜数字游戏"<<endl;
	int a;
	cout <<"请输入一个1~100的数"<<endl;
	cin>>a;
	cin.clear();//输入字母的时候cin已经坏了，这时候ABC会留在缓存区，而后面的ignore因为cin坏了没有作用，所以后面不上一条clear
	cin.ignore(2000,'\n');
	while(a < 1 || a > 100 ||cin.fail()){
		cout <<"输入错误，请重新输入吧"<<endl;
		cin.clear();
		cin.ignore(200000,'\n');//可能还有残留导致第二次
		cin>>a;
		cin.ignore(2000,'\n');
	}
	if(a == 9){
		cout <<"恭喜你，才对了"<<endl;
		return 0;
	}
	else{
		cout <<"猜错了，点击回车以重新开始吧！"<<endl;
		cin.get();
		cout <<"是否重新开始？（Y/n)"<<endl;
		cin>>again;
		cin.ignore(2000,'\n');		
	}
	while(again != "y"&&again !="Y"&&again !="n"&&again !="N"){
	cout <<"输入错误，请重新输入"<<endl;
	cin>>again;
	cin.ignore(1000,'\n'); 
}
}
}