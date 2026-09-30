
#include <iostream>
#include <windows.h>
#include <random>
#include <string>

int main() {
	SetConsoleOutputCP(65001);
	std::random_device seed;
	std::mt19937 shuzi(seed());
//	std::uniform_int_distribution<int> shuziji(0,49);
//	int result = shuziji(shuzi);   每次取seed时间太短，并无太大区别，创建放在外面
	std::string names[50] = {
		"James",      "Mary",       "Robert",     "Patricia",   "John",
		"Jennifer",   "Michael",    "Linda",      "William",    "Elizabeth",
		"David",      "Barbara",    "Richard",    "Susan",      "Joseph",
		"Jessica",    "Thomas",     "Sarah",      "Charles",    "Karen",
		"Christopher","Lisa",       "Daniel",     "Nancy",      "Matthew",
		"Betty",      "Anthony",    "Margaret",   "Mark",       "Sandra",
		"Donald",     "Ashley",     "Steven",     "Dorothy",    "Paul",
		"Kimberly",   "Andrew",     "Emily",      "Joshua",     "Donna",
		"Kenneth",    "Michelle",   "Kevin",      "Carol",      "Brian",
		"Amanda",     "George",     "Melissa",    "Timothy",    "Deborah"
	};
//	int gen[20];     //数组越界了34109380-2840-9
    int gen[50];
	for(int i = 0; i <50; i++) {
		gen[i] = i;
	}



//	int gen1[2];
//	for(int i = 0; i <50; i++) {
//		gen1[i] = i;
//	}
//
//
//
//	int gen2[5];
//	for(int i = 0; i <50; i++) {
//		gen2[i] = i;
//	}



	for(int j = 0; j < 50 ; j++) {
		std::uniform_int_distribution<int> shuziji(j,49);
		int k = shuziji(shuzi);
		std::swap(gen[j],gen[k]);
	}


//		for(int j = 0; j < 50 ; j++) {
//		std::uniform_int_distribution<int> shuziji(j,49);
//		int k = shuziji(shuzi);
//		swap(gen[j],gen[k]);
//	}
//
//
//		for(int j = 0; j < 50 ; j++) {
//		std::uniform_int_distribution<int> shuziji(j,49);
//		int k = shuziji(shuzi);
//		swap(gen[j],gen[k]);
//	}


	std::string huamingce[2][2][5];
	int y = 0;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			for(int k = 0; k < 5; k++) {
				huamingce[i][j][k] = names[gen[y]];
				y++;
			}
		}
	}
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			for(int k = 0; k < 5; k++) {
				std::cout << huamingce
				[i][j][k] << std::endl;
			}
		}
	}
}