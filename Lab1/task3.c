#include <stdio.h>

// Вывод общего уравнения прямой Ax + By + C = 0 через две точки (x1, y1) и (x2, y2)
void print_line(const char* name, double x1, double y1, double x2, double y2) {
    double A = y2 - y1;
    double B = x1 - x2;
    double C = -A * x1 - B * y1;
    printf("Сторона %s: (%.2f) * x + (%.2f) * y + (%.2f) = 0\n", name, A, B, C);
}

int main(void) {
    double x1, y1, x2, y2, x3, y3;
    printf("Введите координаты точки A (x y): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Введите координаты точки B (x y): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Введите координаты точки C (x y): ");
    scanf("%lf %lf", &x3, &y3);

    printf("\nУравнения сторон треугольника:\n");
    print_line("AB", x1, y1, x2, y2);
    print_line("BC", x2, y2, x3, y3);
    print_line("CA", x3, y3, x1, y1);
    return 0;
}