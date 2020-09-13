#include<stdio.h>

float sq(float x, float y) {
	return x*y;
}

float tri(float x, float y) {
	return 0.5 * x * y;
}

int main() {
	int x;
	float a1, a2;
	printf("1.Square area\n2.Triangle area\nInput number : ");
	scanf_s("%d", &x);
	if (x == 1 || x == 2)
	{
		if (x == 1)
		{
			printf("Input length : ");
			scanf_s("%f", &a1);
			printf("Input width : ");
			scanf_s("%f", &a2);
			printf("Square area : %.2f", sq(a1, a2));
		}
		else
		{
			printf("Input base : ");
			scanf_s("%f", &a1);
			printf("Input height : ");
			scanf_s("%f", &a2);
			printf("Triangle area : %.2f", tri(a1, a2));
		}
	}
	else
		printf("ERROR");
	return 0;
}