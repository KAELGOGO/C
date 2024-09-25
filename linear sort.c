#include <stdio.h>

int main(){
	int ar[10]={0,1,2,12,4,5,6,7,8,9};
	int x=sizeof(ar)/sizeof(ar[0]);
	int i,n;
	int ya=0;
	int sar=0;
	int si=0;
	scanf("%d",&n);
	for(i=0;i<x;i++){
		if(ar[i]==n){
			ya++;
			sar+=ar[i];
			si+=i;
		}
	}
	if(ya==1){
		printf("ar[%d]= %d\n",si,sar);
	}else{
		printf("GK ADA\n");
	}
		
	
	return 0;
}
