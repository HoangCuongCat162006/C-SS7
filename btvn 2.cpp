#include <stdio.h>

int main(){
	
	int arr[5];
	
	printf("Nhap 5 so nguyen : \n");
	for(int i=0 ; i<5 ; i++ ){
		printf("Nhap phan tu thu %d: \n",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Cac phan tu trong mang la : \n");
	for (int i=0;i<5;i++){
		printf("Phan tu tai chi so %d la : %d\n",i,arr[i]);
	}
	return 0;
}
