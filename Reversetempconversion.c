#include<stdio.h>
main()
{
	for (int fahr = 300; fahr >= 0; fahr = fahr - 20)
	{
		printf("%3d  %6.2f\n", fahr, (5 / 9.0) * (fahr - 32));
	}
}