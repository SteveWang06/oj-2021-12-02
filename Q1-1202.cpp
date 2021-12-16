#include<stdio.h>
int main(){
	int n = 0, a = 0;
	puts("enter product code and quantity");
	//scanf("%d%d", &n, &a);
	while(scanf("%d%d", &n, &a) != EOF){
		if(n < 5){
			switch(n){
				case 1:
					printf("%.2f\n", 2.8 * a);
					break;
				case 2:
					printf("%.2f\n", 4.50 * a);
					break;
				case 3:
					printf("%.2f\n", 9.98 * a);
					break;
				case 4:
					printf("%.2f\n", 4.49 * a);
					break;
				case 5:
					printf("%.2f\n", 6.87 * a);
					break;
			}
		}
		else{
			puts("this product code don't have in your list");
		}
	}
}
