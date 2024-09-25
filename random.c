#include <stdio.h>

int main(){
	srand(time(0));//inisiasi angka acak dengan waktu sistem
	int random=rand();//fungsi random angka
	printf("Random int : %d\n",random);
	
	int rand10=(rand()%10)+1;//menghasilkan angka random rentan 1-10
	printf("Random (1-10) : %d\n",rand10);
	
	return 0;
}
