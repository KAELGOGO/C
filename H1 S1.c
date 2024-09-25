#include <stdio.h>

int main(){
//	traversing = menelusuri array
//	int ar[5]={1,2,3,4,5};
//	int i;
//	printf("%d\n",ar[0]);
//	printf("%d\n",ar[4]);
//	for(i=0;i<5;i++){
//		printf("%d\n",ar[i]);
//	}

	int n,i;
	printf("masukkan jumlah element dalam array:");
	scanf("%d",&n);
	
	int ar[n];
	printf("masukkan element array:");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	int max=ar[0];
	int min=ar[0];
	
	for(i=0;i<n;i++){
		if(ar[i]>max){
			max=ar[i];
		}
		if(ar[i]<min){
			min=ar[i];
		}
	}
	printf("MAX :%d\n",max);
	printf("MIN :%d",min);

	return 0;
}
