/*
	1. In ra cac so tu 0 den 10
*/
#include <stdio.h>
int main(){
	printf("Cac so trong khoang 0-10 la:\n");
	for(int i=0;i<=10;i++){
		printf("%d\t",i);
	}
	printf("\n");	
	//2. Su dung vong lap for tim ra diem trung binh trong khoang 0-10
	int i,j;
	for(i=0,j=10;i<j;i++,j--){
		
	}
	printf("Gia tri diem trung binh la: %d\n",i);
	//3. In ra cac so chan trong khoang 1-10
	int k = 1;
	printf("Cac so chan trong khoang 1-10:\n");
	for(;;){
		if(k<10){
			if(k%2==0){
				printf("%d\t",k);
			}
		}else{
			break;
		}	
		k++;	
	}
	printf("\n");
	//4. In ra cac so le bat dau tu 1 va co gia tri <20
	//Khong duoc su dung if
	printf("Cac so le nho hon 20: \n");
	for(int n=1; n<20; n+=2){
		printf("%d\t",n);
	}
	
}
