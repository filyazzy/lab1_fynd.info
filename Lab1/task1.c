#include <stdio.h>

int main(void) {
    long long num;
    printf("Введите 8-значное число: ");
    if (scanf("%lld", &num) != 1) return 1;

    // Извлечение цифр слева направо
    int d1 = (num / 10000000) % 10;
    int d2 = (num / 1000000) % 10;
    int d3 = (num / 100000) % 10;
    int d4 = (num / 10000) % 10;
    int d5 = (num / 1000) % 10;
    int d6 = (num / 100) % 10;
    int d7 = (num / 10) % 10;
    int d8 = num % 10;

    int m1, m2, m3, m4, m5, m6, m7, m8;
    printf("Для каждой цифры введите 1 (включить в сумму) или 0 (пропустить):\n");
    printf("Цифра %d: ", d1); scanf("%d", &m1);
    printf("Цифра %d: ", d2); scanf("%d", &m2);
    printf("Цифра %d: ", d3); scanf("%d", &m3);
    printf("Цифра %d: ", d4); scanf("%d", &m4);
    printf("Цифра %d: ", d5); scanf("%d", &m5);
    printf("Цифра %d: ", d6); scanf("%d", &m6);
    printf("Цифра %d: ", d7); scanf("%d", &m7);
    printf("Цифра %d: ", d8); scanf("%d", &m8);

    // Сумма вычисляется умножением цифры на маску (0 или 1) без оператора if
    long long sum = d1 * m1 + d2 * m2 + d3 * m3 + d4 * m4 +
                    d5 * m5 + d6 * m6 + d7 * m7 + d8 * m8;

    printf("Сумма выбранных цифр: %lld\n", sum);
    return 0;
}