#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n;
		
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	
	if (n<=0){
		printf("So phan tu phai lon hon 0\n");
		return 1;
	}
	
	int *arr = (int *)malloc(n*sizeof(int));
	if (arr == NULL){
		printf("Khong the cap phat bo nho.\n");
		return 1;
	}
	
	printf("Nhap cac phan tu cua mang : \n");
	for (int i =0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
	
		scanf("%d", &arr[i]);
	}
	printf("Cac phan tu trong mang la : \n ");
	for (int i=0;i<n;i++){
		printf("Phan tu tai chi so %d: %d\n",i,arr[i]);
	}
	
	 
	
	
	free(arr);
	return 0;
}
