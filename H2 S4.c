#include <stdio.h>
#include <string.h>

int main(){
	//deklarasi string 1 dan 2
	char str1[100];
	char str2[100];
	//input string 1 dan 2
	fgets(str1,sizeof (str1),stdin);
	fgets(str2,sizeof (str2),stdin);
	//menghapus \n dari input string 1 dan 2
	str1[strcspn(str1,"\n")]='\0';
	str2[strcspn(str2,"\n")]='\0';
	//var d hanya untuk menyimpan fungsi strcmp(mengecek kesamaan string(jika keluaran 0 ,maka sama))
	int d=strcmp(str1,str2);
	//kondisional jika d =0 ,maka string sama
	if(d==0){
		printf("sama");
	}else{
		printf("beda");
	}
	
	return 0;
}
