#include <stdio.h>

int main(){
	int i,j,temp,n;
	//input jumlah element
	scanf("%d",&n);
	//deklarasi ar
	int ar[n];
	//loop mengisi element
	for(i=0;i<n;i++){
		//mengisi element
		scanf("%d",&ar[i]);
	}
	//loop luar untuk membaca element
	for(i=0;i<n-1;i++){
		//loop dalam untuk membandingkan element 
		for(j=0;j<n-i-1;j++){
			//jika  element[j] lebih besar
			if(ar[j]>ar[j+1]){
				//maka element [j] akan diambil dulu ke temp(kosong)
				temp=ar[j];
				//lalu element[j] akan ditukar dengan elemen kananya [j+1]
				ar[j]=ar[j+1];
				//lalu element[j+1] akan ditukar dengan element [j] tadi yg di simpan di temp
				ar[j+1]=temp;
			}
		}
	}
	//loop mengeluarkan element yg sudah di urutkan
	for(i=0;i<n;i++){
		//output
		printf("%d ",ar[i]);
	}
	
	return 0;
}
