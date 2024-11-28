#include<stdio.h>

int main(){
	
	int arr[5]={2,7,9,4,12};
	
	int max=arr[0];
	int min=arr[0];
	
	for (int i=1 ; i<5 ;i++){
		if(arr[i] > max){
			max=arr[i];
		}
		if(arr[i] < min){
			min=arr[i];
		}
		printf("Phan lon nhat trong mang la : %d\n ",max);
		printf("Phan nho nhat trong mang la : %d\n ",min);
	}
		
	
	return 0;
}
