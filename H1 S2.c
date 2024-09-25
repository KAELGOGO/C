#include <stdio.h>

int main(){
	int n,i;
	printf("masukkan jumlah element : ");
	scanf("%d",&n);
	
	int ar[n];
	printf("masukkan element :");
	for(i =0 ;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int ganjil=0;
	int genap =0;
	for(i =0 ;i<n;i++){
		if(ar[i]%2==0){
			genap++;
		}else{
			ganjil++;
		}
	}
	printf("genap :%d\n",genap);
	printf("ganjil :%d",ganjil);
	return 0;
}
