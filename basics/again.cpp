#include "iostream"
#include "windows.h"
using namespace std;

int main(){
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	string again="y";
	while(again=="y" || again=="Y"){
		cout<<"请输入一个1~100的数字"<<endl;
		int a;
		cin >>a;
		cin.ignore(2000,'\n');
		while(a <1 || a >100 ||cin.fail()){
			cout <<"输入错误，请重新输入"<<endl;
		    cin>>a;
		    cin.ignore(2000,'\n');
		}
		if(a == 9){
			cout <<"猜对了"<<endl;
		}else{
			cout <<"猜错了"<<endl;
			cout <<"按下回车键重新猜吧"<<endl;
			cin.get();
			cout <<"是否重新开始？（y/n）"<<endl;
			cin>>again;
			cin.ignore(2000,'\n');
			}
		}
		while(again != "y" && again != "Y" || again != "n" || again!= "N"){
				cout <<"输入错误，请重新输入"<<endl;
				cin>>again;
				cin.ignore(2000,'\n');
	}
}
