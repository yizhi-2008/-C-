#include <iostream>

int main(){
	int* p = new int[9]{13,4,76,87,34,31,1,21,53};
	
	for(int i = 0 ; i < 9 ; i++){
		for(int j = i; j < 9; j++){
			int min = p[i];
			if(p[j] < min){
				std::swap(p[i],p[j]);
			}
		}
	}
	for(int i = 0 ; i < 9; i++){
		std::cout << p[i] << std::endl;
	}
}