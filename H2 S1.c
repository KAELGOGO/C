#include <stdio.h>
int main(){
	char nama[100];
	//input nama
//	fgets(nama,sizeof(nama),stdin);
	scanf("%[^\n]",&nama);
//	getchar();
	int i;
	//panjang string
	int panjang=strlen(nama);
	for(i=0;i<panjang;i++){
		putchar(nama[i]);
	}
	printf("\n");
	//loop membalikkan char pada string
	for(i=panjang;i>=0;i--){
		putchar(nama[i]);
	}
	
	return 0;
}
