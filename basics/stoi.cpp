#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a;
	if(n>=0){a=n;}else{a=-n;}
	string k=to_string(a);
	int j=k.length();
	for(int i=0;i<j/2;i++){
		swap(k[i],k[j-1-i]);
	}
	//int d=stoi(k);
	if(j>=10&&k>="2147483647"){
		cout <<0;
		return 0;
	}
	int d=stoi(k);
	 if(n>=0){
		cout <<d;
	}else if(n<0){
		cout<<-d;
	}
}