#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double x, y;
    printf("Введите два числа x и y: ");
    scanf("%lf %lf", &x, &y);

    // Математическая формула: max(x, y) = (x + y + |x - y|) / 2
    // Выполняется без единого if
    double max_val = (x + y + labs((long)(x - y))) / 2.0;

    printf("Максимум: %.2f\n", max_val);
    return 0;
}