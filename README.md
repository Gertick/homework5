### ***Домашнее задание к работе 5***
---
## ***Условие задачи***

Вычислить значение выражения c = 2^(y^x) + (3^x)^y - (y * (arctg(z) - pi / 6)) / (|x| + 1 / (y^2 + 1)), если x = 3.251, y = 0.325, z = 0.466 * 10^(-4).

## ***1. Алгоритм и блок-схема***

- ***Алгоритм***

    1. **Начало**
    2. Задать исходные данные:
        x = 3.251;
        y = 0.325;
        z = 0.466e-4;
    3. Вычислить первую часть выражения:
        term1 = pow(2, pow(y, x));
    4. Вычислить вторую часть выражения:
        term2 = pow(pow(3, x), y);
    5. Вычислить числитель дроби:
        numerator = y * (atan(z) - M_PI / 6);
    6. Вычислить знаменатель дроби:
        denominator = fabs(x) + 1.0 / (y * y + 1);
    7. Вычислить значение всего выражения:
        c = term1 + term2 - (numerator / denominator);
    8. Вывести результаты расчетов с подстановкой всех значений в текст.
    9. **Конец**


***Блок-схема***

<img width="161" height="750" alt="изображение" src="https://github.com/user-attachments/assets/7ae49c5b-4df4-453a-8b8e-f170dfea8795" />


*https://drive.google.com/file/d/1l5vHhPyXwKpqkLGd4tHfTx6xs15qW4-L/view?usp=sharing*

## 2. ***Реализация программы***

```c
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
    printf("При x = %.3f, y = %.3f, z = %.2le значение выражения c = %f", x, y, z, c);
}
