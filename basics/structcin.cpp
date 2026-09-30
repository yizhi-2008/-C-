#include <iostream>
#include <string>
#include <windows.h>
int main(){
	SetConsoleOutputCP(65001);
	struct Student{
		std::string name;
		std::string site;
		int age;
	};
	struct Student S[5];
	for(int i=0;i < 5;i++){
		std::cout << "请输入姓名" << std::endl;   //如果输入的内容不符合类型，cin就会错误，后面cin的所有操作都失效了18-95809423
		std::cin >> S[i].name ;
		std::cout << "请输入地址" << std::endl;
		std::cin >> S[i].site ;
		std::cout << "请输入年龄" << std::endl;
		std::cin >> S[i].age  ;  
	}
	for(int i = 0; i < 5;i++){
		std::cout << "我叫" << S[i].name << "我今年" << S[i].age << "岁" << "我住在" << S[i].site << std::endl;
	}
}