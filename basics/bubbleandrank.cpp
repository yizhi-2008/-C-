#include <iostream>
using namespace std;


int arr[20] = {
	45, 12, 78, 3, 56, 91, 24, 67, 8, 33,
	50, 19, 72, 5, 88, 41, 63, 27, 95, 10
};
int arr1[20] = {
	45, 12, 78, 3, 56, 91, 24, 67, 8, 33,
	50, 19, 72, 5, 88, 41, 63, 27, 95, 10
};
int arr2[20] = {
	45, 12, 78, 3, 56, 91, 24, 67, 8, 33,
	50, 19, 72, 5, 88, 41, 63, 27, 95, 10
};

void uprank(int a[]){
	int r[20];
	for(int i=0;i<20;i++){
		r[i]=0;
	}
	
	for(int i=1;i<20;i++){
		for(int j=0;j<i;j++){
			if(a[i]<=a[j]){
				r[j]++;
			}else{
				r[i]++;
			}
		}
	}
	
	for(int i=0;i<20;i++){
		if(r[i]==i){
			//pass;
		}else{
			swap(a[r[i]],a[i]);//把a[i]换到他的位置上		
			}
	}
}

void reverserank(int a[]){
	int r[20];
	for(int i=0;i<20;i++){
		r[i]=0;
	}
	
	for(int i=1;i<20;i++){
		for(int j=0;j<i;j++){
			if(a[j]<=a[i]){
				r[i]++;
			}else{
				r[j]++;
			}
		}
	}
	
	
	for(int i=0;i<20;i++){
		if(r[i]==19-i){
		}else{
			swap(a[19-r[i]],a[i]);
		}
	}
}



bool again=true;



void bubble(int a[]){
	for(int i=0;i<19&&again;i++){
		for(int j=i;j<19;j++){
			again=false;
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
				again=true;
				}
			}
		}
	}




void reversebubble(int a[]){
	again=false;
	for(int i=0;i<19;i++){
		for(int j=i;j<19;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				again=true;
			}
		}
	}
}








void select(int a[]){
	
}





















