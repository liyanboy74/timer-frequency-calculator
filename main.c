#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char ch;
	int b,l;
	float i,j,bb=1;
	float k,o,freq,e;
	
	puts("Enter Fin:");
	scanf("%f",&k);
	puts("Enter Fout:");
	scanf("%f",&freq);
	puts("Enter Max Error:");
	scanf("%f",&e);
	puts("Enter Size of Div1&2 (bit):");
	scanf("%d",&b);
	
	for(l=0;l<b;l++) bb=2*bb;	
	
	printf("Starting...\r\n");
	for (i=1;i<bb+1;i++)
	{
	 for(j=1;j<bb+1;j++)
	 {
	 	o=(float)k/(i*j);
	 	if((o>=freq-e)&&(o<=freq+e))
	 	printf("Fo=%f\tDiv1=%-5.0f\tDiv2=%-5.0f\tFin=%.0f\r\n",o,i-1,j-1,k);
	 }
	}
	printf("END\r\n");
	getch();
	return 0;
}
