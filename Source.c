#include<stdio.h>
main()
{
	printf("Converting celsius to fahrenheit temperature\n");
	float cel, fah;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	cel = lower;
	while (cel <= upper) {
		fah = (9.0 / 5.0) * cel + 32;
		printf("%3.0f  %6.1f\n", cel, fah);
		cel = cel + step;
	}
}