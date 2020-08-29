#include<stdio.h>
main()
{
	printf("Converting degree Fahreinheat to degree celsius\n");
	float fah, cel;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fah = lower;
	while (fah <= upper) {
		cel = (5.0 / 9.0) * (fah - 32);
		printf("%3.0f  %6.2f\n", fah, cel);
		fah = fah + step;
	}

}