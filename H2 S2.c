#include <stdio.h>
#include <string.h>//library string
#include <ctype.h>//library tolower

int main(){
	char kalimat_pendek[100];
	//input kalimat
	fgets(kalimat_pendek,sizeof(kalimat_pendek),stdin);
	//menghapus newline
	kalimat_pendek[strcspn(kalimat_pendek,"\n")]='\0';
	//panjang kalimat
	int p=strlen(kalimat_pendek);
	int i;
	int vokal=0;
	int konsonan=0;
	//loop membaca kalimat
	for(i=0;i<p;i++){
		//mengubah karakter menjadi huruf kecil(tolower)
		char ch=tolower(kalimat_pendek[i]);
		//check huruf vokal
		if(ch=='a'||ch=='i'||ch=='u'||ch=='e'||ch=='o'){
			//menambah vokal
			vokal++;
		//memeriksa apakah karakter merupakan huruf(isalpha)
		}else if(isalpha(ch)){
			//menambah konsonan
			konsonan++;
		}
	}
	
	printf("vokal: %d\nkonsonan: %d",vokal,konsonan);
	
	return 0;
}
