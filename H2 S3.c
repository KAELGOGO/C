#include <stdio.h>
#include <string.h>

int main(){
	//deklarasi kata
	char kata[100];
	//input kata
	scanf("%s",kata);
	//tutup input
	getchar();
	//mencari panjang kata
	int p=strlen(kata);
	//deklarasi i untuk loop
	int i;
	//deklarasi jika kata polindrom  =1;
	int polindrom=1;
	//loop huruf/huruf sampai setengah dari panjang kata
	for(i=0;i<p/2;i++){
		//jika setengah awal dari kata tsb != setengah akhir dari kata tsb
		//tolower untuk mengecilka semua huruf agar lebih mudah 
		if(tolower(kata[i])!=tolower(kata[p-i-1])){
			//polindrom diubah jadi 0
			polindrom=0;
			//tutup loop
			break;
		}
	}
	//jika polindrom tidak berubah(berati huruf setengah kata awal = setengah kata akhir)=polindrom
	if(polindrom){
		//keluarkan benar polindrom
		printf("BENAR POLINDROM\n");
	//klo ngk(if loop diatas benar(polindrom =0) =bukan polindrom
	}else{
		//keluarkan bukan polindrom
		printf("BUKAN POLINDROM\n");
	}
	
	return 0;
}
