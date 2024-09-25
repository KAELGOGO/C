#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	
	int ar[n];
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	
	printf("Mengurut dari kecil: ");
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	printf("\nMengurut dari besar: ");
	for(i=n-1;i>=0;i--){
		printf("%d ",ar[i]);
	}
	
	return 0;
}
