#include<stdio.h>
int main(){
	
	int arr[5]= {3, 5, 9, 15, 21};
	
	int test=0;
	
	printf("Cac so chan trong mang la : \n");
	
	for (int i=0;i<5;i++){
		if (arr[i]%2==0){
			printf("%d",arr[i]);
			test = 1;
		}
	}
	if (!test){
		printf("Mang khong chua so chan \n");
	}
	return 0;
}
