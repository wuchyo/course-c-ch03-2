#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 0;
	int space;
	int num2 = 4;
	
	while (num < 9) {
		if (num < 5){
			space = 0;
			while (space <= num) {
				printf("*");
				space = space + 1;
			}
		} 
		else {
		    space = 0;
			while (space < num2) {
				printf("*");
				space = space + 1;
			}
			num2 = num2 - 1;
	    }
		printf("\n");
		
		num = num + 1;
	}
	
	return 0;
}
