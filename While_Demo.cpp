#include <stdio.h>
int main(){
	//1. Nhap vao cac so va tinh tong cac so do, ket thuc
	//khi nhap 0
	printf("Nhap vao mot so:");
	int a = 1;
	int sum = 0;
	while(a!=0){
		scanf("%d",&a);
		sum+=a;
	}
	printf("Tong cac so vua nhap la: %d\n",sum);
	
	
}
