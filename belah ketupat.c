#include <stdio.h>

int main(){
	int i,j,k,l;
	int n=6;
	int m=6;
	for(i=0;i<n;i++){
		for(j=m-1;j>i;j--){
			printf("  ");
		}
		for(k=0;k<i+1;k++){
			printf("* ");
		}
		for(l=0;l<i;l++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=n;i>0;i--){
		for(j=m;j>i;j--){
			printf("  ");
		}
		for(k=0;k<i;k++){
			printf("* ");
		}
		for(l=0;l<i-1;l++){
			printf("* ");
		}
		printf("\n");
	}
	
	
	return 0;
}
