#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/***/
int main() {
	int x;
	for(x=1;x<=100;x++){
		int i;
		int t=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				t=0;
			}
		}
		
		if(t==1){
			printf("%d ",x);
		}
	}
	return 0;
}
