#include <iostream>
using namespace std;

int score=0;
void counter(char k){
	switch (k){
		case 'y':score=score+2;
		break;
		case 'g':score=score+3;
		break;
		case 'c':score=score+4;
		break;
	    case 'b':score=score+5;
	    break;
	    case 'p':score=score+6;
	    break;
	    case 'B':score=score+7;
	    break;
	}
}

int main(){
	int n;
	cin>>n;
	char k;
	int j;
	for(int i=0;i<n;i++){
		cin>>k;
		if(k=='r'){
			cin>>j;
			score=score+j;
		}else{
			counter(k);
		}
	}
	cout <<score;
}