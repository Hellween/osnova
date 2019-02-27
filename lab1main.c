#include <stdio.h>
#include <conio.h>
int main(void)
{
	float v0, t; 
	float V, v1, v2; 

	printf("V= ");
	scanf_s("%d", &V);
	printf("v1= ");
	scanf_s("%d", &v1);
	printf("v2= ");
	scanf_s("%d", &v2);

	v0=v1-v2;
	t=V/v0;

	printf("time= %f",t);
	_getch();
	return 0;
   }
