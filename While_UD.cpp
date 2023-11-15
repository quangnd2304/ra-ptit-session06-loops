#include <stdio.h>
int main(){
	//Nhap vao cac so nguyen, tinh tong cac so le vua nhap
	//ket thuc khi nhap 0
	int sum = 0;
	int a = 1;
	printf("Nhap vao cac so nguyen:\n");
	while(a!=0){
		scanf("%d",&a);
		//sum = sum+a;
		if(a%2!=0){
			sum+=a;
		}		
	}
	printf("Tong cac so le vua nhap la: %d\n",sum);
}
