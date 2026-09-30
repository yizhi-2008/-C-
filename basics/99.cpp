#include "iostream"

int main() {
	int a,b=1;
	for(; b <= 9;) {
		for(a=1; a <= 9; a++) {
			int result = a*b;
			std::cout << a <<"*"<< b << "=" <<  result <<std::endl;
		}
		b++;
	}
}