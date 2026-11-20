#include <stdio.h>

int main(void) {
    int num;
    printf("Введите 4-значное число: ");
    scanf("%d", &num);

    int ab = num / 100;
    int cd = num % 100;

    printf("Сумма ab + cd (%d + %d) = %d\n", ab, cd, ab + cd);
    return 0;
}