#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int temp=a*b;
	while(b!=0){
		int temp;
		temp=b;
		b=a%b;
		a=temp;
	}
	printf("FPB : %d\n",a);
	printf("KPK : %d\n",temp/a);
	return 0;
}
