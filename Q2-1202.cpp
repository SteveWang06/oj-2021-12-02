#include<stdio.h>
int main(){
	int time, fee;
	do{
		scanf("%d", &time);
		if(time < 0){
			puts("enter wrong !!");
		}
		else if(time > 0 && time < 8){
			printf("%.2f\n", 25 + 25*0.5);
		}else if(time > 8 && time < 24){
			fee = 25 + (time - 8) * 5;
			printf("%.2f\n", fee + (fee * 0.5));
		}else if(time > 24 && time <= 72){
			fee = (time / 24) * 50;
			printf("%.2f\n", fee + (fee * 0.5));
		}else if (time > 72){
			puts("time can't > 72");
		}
	}while(time <= 0 || time > 72);
}
