#include <stdio.h>

int main(){
	
	int n,i;
	printf("masukkan jumlah element: ");
	scanf("%d",&n);
	
	int ar[n];
	printf("masukkan element : ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	float total=0;
	for(i=0;i<n;i++){
		total+=ar[i];
	}
	printf("Total element = %.f\n",total);
	printf("Rata rata dari element = %.2f\n",total/n);
	
	
	return 0;
}

