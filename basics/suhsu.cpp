#include "iostream"
using namespace std;

int main(){
	int n;
	int i;
	cout<<"请输入一个正整数"<<endl;
	cin>>n;
	for(i = 2;i <= n/2;i++){
		if (n%i == 0){
			cout<<"不是素数"<<endl;
            break;
		}
    }
    cout<<"是素数"<<endl;
    return 0;
}