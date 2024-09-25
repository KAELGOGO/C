#include <stdio.h>

int main(){
	
	int i,j,first,n;
	//input jumlah element ar
	scanf("%d",&n);
	//deklarasi ar[VAR]
	int ar[n];
	//loop mengisi element
	for(i=0;i<n;i++){
		//mengisi element ar[i]
		scanf("%d",&ar[i]);
	}
	//menyimpan ar[0] 
	first=ar[0];
	//loop membaca ar[i]
	for(i=0;i<n-1;i++){
		//menukar element ar[i] dengan ar[i+1](sebelah kanan /selanjut nya)
		ar[i]=ar[i+1];
	}
	//mengganti ar[n-1](terakhir) dengan ar[0](pertama)
	ar[n-1]=first;
	
	for(i=0;i<n;i++){
		printf("%d",ar[i]);
	}
	
	
	return 0;
}
