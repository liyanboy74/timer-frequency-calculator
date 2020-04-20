#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	long int i,j;
	float k,o,freq,e;
	
	puts("Enter Fin:");
	scanf("%f",&k);
	puts("Enter Fout:");
	scanf("%f",&freq);
	puts("Enter Max Error:");
	scanf("%f",&e);
	
	printf("Starting... Div(16bit)\r\n");
	for (i=1;i<0xfff+1;i++)
	{
	 for(j=1;j<0xffffff+1;j++)
	 {
	 	o=k/(i*j);
	 	if((o>=freq-e)&&(o<=freq+e))
	 	printf("Fo=%f\tDiv1=%5x\tDiv2=%5x\tFin=%.0f\r\n",o,i-1,j-1,k);
	 }
	}
	printf("END\r\n");
	
	while(1);
	return 0;
}
