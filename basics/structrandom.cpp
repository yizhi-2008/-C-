#include <iostream>
#include <string>
#include <random>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	std::random_device seed;
	std::mt19937 shuzi(seed());
	//std::uniform_int_distribution<int> shuziji(1,5);
		struct Student{
		std::string name;
		int ID;
		std::string site;
	};
	struct Student S[5];
	std::string name[5]={"蜘蛛侠" , "钢铁侠" , "绿巨人" , "雷神" , "黑寡妇"};
	std::string site[5]={"皇后区" , "复仇者总部" , "墓地" , "小镇" , "阿斯加德"};
	
	
	int gen[5]={0,1,2,3,4};
	for(int i = 0;i < 5;i++){
		std::uniform_int_distribution<int> shuziji1(i,4);
		std::swap(gen[i],gen[shuziji1(shuzi)]);
	};
	
	for(int i = 0;i < 5;i++){
		S[i].name = name[gen[i]];
	}
	
	
	int gen1[5] = {0,1,2,3,4};
	for(int i = 0;i < 5;i++){
		std::uniform_int_distribution<int> shuziji2(i,4);
		std::swap(gen1[i],gen1[shuziji2(shuzi)]);
	};
	for(int i = 0; i < 5; i++){
		S[i].site = site[gen1[i]];
	}
	for(int i = 0; i < 5; i++){
		std::cout << "我是" << S[i].name << "," << "来自" << S[i].site << std::endl; 
	}
}