#include <stdio.h>
#include <stdlib.h>
int main(){
	/*
		In ra menu cua 1 cua hag an sang the hien cuoc song
		cua sinh vien
		****************MENU***************
		1. Pho bo Kobe
		2. Pho ga Viet Nam
		3. Xoi trung thit
		4. Banh my pate
		5. My tom khong nguoi lai
		6. Thoat
		Su lua chon cua ban:
	*/
	//1. In ra menu su dung dung vong lap do...while
	do{
		printf("***************MENU*************\n");
		printf("1. Pho bo Kobe\n");
		printf("2. Pho ga Viet Nam\n");
		printf("3. Xoi trung thit\n");
		printf("4. Banh my pate\n");
		printf("5. My tom khong nguoi lai\n");
		printf("6. Thoat\n");
		printf("Su lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Ban vua chon pho bo Kobe\n");
				break;
			case 2:
				printf("Ban vua chon pho ga Viet Nam\n");
				break;
			case 3:
				printf("Ban vua chon xoi trung thit\n");
				break;
			case 4:
				printf("Ban vua chon banh my pate\n");
				break;
			case 5:
				printf("Ban vua chon my tom khong nguoi lai\n");
				break;
			case 6:
				exit(0);
			default:
				printf("Vui long chon 1-6\n");
		}
	}while(1==1);
}
