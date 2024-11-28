#include<stdio.h>
int main(){
	int n;
	
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("So phan tu phai lon hon 0 \n");
		return 1;
	}
	int arr[n];
	for (int i=0 ; i<n ; i++){
		while(1){
			printf("Phan tu so %d phai la so le ",i+1);
			scanf("%d",&arr[i]);
		if (arr[i] %2 != 0 ){
			break;
		}else{
			printf("So nhap vao phai la so le , hay nhap lai \n");
		}
		}
	}
	for (int i=0;i>5;i++){
		printf("phan tu tai chi so %d : %d\n",i,arr[i]);
	}
	return 0;
}
