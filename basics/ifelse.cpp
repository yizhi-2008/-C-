#include "iostream"
#include "windows.h"
using namespace std;

int main(){
	SetConsoleOutputCP(65001);
	
	int love;
	cout <<"请输入0和1来说明你对我的爱意"<<endl;
	cin>>love;
	if(cin.fail()){
		cout <<"不清楚你的意思呢"<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
	}
	int weather;
	cout <<"请输入0和1来说说明天的天气吧"<<endl;
	cin>>weather;
	if(cin.fail()){
		cout <<"不清楚你的意思呢"<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
	}
	if(love == 1){
		if(weather == 1){
			cout <<"我们一起去散步吧！"<<endl;
		}else{
			cout <<"我们一起去看电影吧！"<<endl;
		}
	}else{
		cout <<"哼！我去追求小美了！今天的我你爱答不理，明天的我你高攀不起！"<<endl;
	}
}