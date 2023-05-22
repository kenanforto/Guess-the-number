#include <stdio.h>
#include <math.h>
int daj_sljedeci_broj(int x)
{
	static int c1=0;
	static int c2=100;
	static int c=50;
	if(x==-1)
	{
		c2=c;	
		c-=round((double)(c2-c1))/2;
	}
	else if(x==1)
	{
		c1=c;	
		c+=round((double)(c2-c1))/2;
	}
	else if(x==0)
		c=c;
		
	return c;
}

int main() {
	char x;
	static int n=0;
	printf("Zamislite neki broj...\n");
	printf("Da li je taj broj %d? ",daj_sljedeci_broj(n));
	do
	{
		do
		{
			scanf(" %c",&x);
			if(x!='M' && x!='V' && x!='J')
			{
				printf("Pogresan unos, probajte ponovo.\n");
				printf("Da li je taj broj %d? ",daj_sljedeci_broj(0));
			}
		}
		while(x!='M' && x!='V' && x!='J');
	
		if(x=='M')
		n=-1;
		else if(x=='V')
		n=1;
		if(x!='J')
		printf("Da li je taj broj %d? ",daj_sljedeci_broj(n));
	}
	while(x!='J');
	printf("Pogodio sam!");
	return 0;
}