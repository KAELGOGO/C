#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int i,j;
	int ar[a];
	for(i=0;i<a;i++){
		scanf("%d",&ar[i]);
	}
	int temp;
	for(i=0;i<a;i++){
		for(j=0;j<a-i-1;j++){
			if(ar[j]>ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	int max=ar[0];
	int min=ar[a-1];
	printf("MAX: %d\n",max);
	printf("MIN: %d\n",min);
	for(i=0;i<a;i++){
		printf("%d ",ar[i]);
	}
	
	
	return 0;
}
