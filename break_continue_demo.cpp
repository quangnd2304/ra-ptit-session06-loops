#include <stdio.h>

int main(){
	for(int i = 0; i<5; i++){
		if(i==2){
			continue;
		}
		printf("i=%d\n",i);
	}
}
