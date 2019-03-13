#include <stdio.h>
#include <conio.h>

int main(void)
{
	float S;
	float a;
	float b;
	int n;

	printf("n=");
	scanf_s("%d", &n);

	S = 0;
	a = 1;
	b = 1;

	for (int i = 0; i < n; i++)
	{
		a *= 1 + i * 2;
		b *= 1 + i * 3;
		S += a / b;
	}

	printf("S=%f", S);
	_getch();
	return 0;
}
