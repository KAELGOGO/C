#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	
	int p =strlen(str);
	
	int i;
	int kata=0;
	
	printf("%d",kata);
	
	return 0;
}
