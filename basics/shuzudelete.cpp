#include <iostream>

int main(){
	int* p= new int[5];
	for(int i = 0;i < 5; i++){
		p[i] = i;
	}
	for(int i = 0 ; i < 5;i++){
	std::cout << p[i] << std::endl;
	}                                                              //p[]本就是一个解码的指针4-1894，不能用*来作前缀
	int* p1 = new int[4];
	for(int i = 0; i < 4; i++){
		if(i < 2){
			p1[i] = p[i];
		}else{
			p1[i] = p[i + 1];
		}
	}
	delete[] p;
	for(int i = 0;i < 4;i++){
		std::cout << p1[i] << std::endl;
	}
}