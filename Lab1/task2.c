#include <stdio.h>

int main(void) {
    int num;
    printf("Введите 6-значное число: ");
    if (scanf("%d", &num) != 1) return 1;

    int d1 = (num / 100000) % 10;
    int d2 = (num / 10000) % 10;
    int d3 = (num / 1000) % 10;
    int d4 = (num / 100) % 10;
    int d5 = (num / 10) % 10;
    int d6 = num % 10;

    // Остаток от деления на 2 превращает четные цифры в 0, а нечетные - в 1
    int r1 = d1 % 2;
    int r2 = d2 % 2;
    int r3 = d3 % 2;
    int r4 = d4 % 2;
    int r5 = d5 % 2;
    int r6 = d6 % 2;

    printf("Результат: %d%d%d%d%d%d\n", r1, r2, r3, r4, r5, r6);
    return 0;
}