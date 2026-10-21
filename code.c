#include <stdio.h>
#include <locale.h>
#include <math.h>

#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846


void homework()
{
    double x, y, z;

    x = 3.251;
    y = 0.325;
    z = 0.466e-4;

    double term1 = pow(2, pow(y, x));
    double term2 = pow(pow(3, x), y);
    double numerator = y * (atan(z) - M_PI / 6);
    double denominator = fabs(x) + 1.0 / (y * y + 1);

    double c = term1 + term2 - (numerator / denominator);
    printf("\n");
    printf("При x = %.3f, y = %.3f, z = %.2le \nзначение выражения c = %f", x, y, z, c);
}

void main()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");

	homework();

}