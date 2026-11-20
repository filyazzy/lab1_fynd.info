#include <stdio.h>

int main(void) {
    printf("A\tB\tC\tAvB\t!(AvB)\t!(AvB)/C\tRes\n");
    printf("-----------------------------------------------------------------\n");

    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            for (int C = 0; C <= 1; C++) {
                int a_or_b = A || B;
                int not_a_or_b = !a_or_b;
                int conj = not_a_or_b && C;
                // Эквиваленция (~) истинна, когда операнды равны
                int res = (conj == A);

                printf("%d\t%d\t%d\t%d\t%d\t%d\t\t%d\n",
                       A, B, C, a_or_b, not_a_or_b, conj, res);
            }
        }
    }
    return 0;
}