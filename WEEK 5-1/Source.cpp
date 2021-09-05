#include <stdio.h>
int main()
{
	int x[10];
	int sum = 0;
	for (int n = 0; n <= 9; n++)
	{
		scanf_s("%d", &x[n]);
		sum = sum + x[n];
	}
	for (int n = 0; n <= 9; n++)
	{
		printf("%d\n", x[n]);
	}
	sum = sum / 10;
	printf("Average Hight is : %d", sum);


}
