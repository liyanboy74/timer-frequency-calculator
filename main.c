#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int b,l,flag=1;
	float i=1,j=1,bb=1;
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
	for (i=1;i<bb+1&&flag;i++)
	{
		for(j=1;j<bb+1;j++)
		{
			o=(float)k/(i*j);
			if((o>=freq-e)&&(o<=freq+e))
			{
				if(i>j)
				{
					flag=0;
					break;
				}
				printf("Fo=%f\tDiv1=%-5.0f\tDiv2=%-5.0f\tFin=%.0f\r\n",o,i-1,j-1,k);	
			}
		}
	}
	printf("END\r\n");
	getch();
	return 0;
}
