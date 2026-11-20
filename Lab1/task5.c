#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("Введите первое 3-значное число: ");
    scanf("%d", &num1);
    printf("Введите второе 3-значное число: ");
    scanf("%d", &num2);

    int a = (num1 / 100) % 10;
    int b = (num1 / 10) % 10;
    int c = num1 % 10;

    int x = (num2 / 100) % 10;
    int y = (num2 / 10) % 10;
    int z = num2 % 10;

    printf("a + z = %d\n", a + z);
    printf("b + x = %d\n", b + x);
    printf("c + y = %d\n", c + y);

    return 0;
}