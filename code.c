#include <stdio.h>
#include <locale.h>
#include <math.h>

#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846


void homework()
{
	double x = 3.251;
	double y = 0.325;
	double z = 0.466 * pow(10, -4);

	double c = pow(2, pow(y, x)) + pow(pow(3, x), y) - (y * (atan(z) - M_PI / 6)) / (fabs(x) + (1 / (pow(y, 2) + 1)));
	puts("При x = 3.251, y = 0.325, z = 0.466*10^-4");
	printf("Значение c равно: %lf", c);
}

void main()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");

	homework();

}