#include <stdio.h>

int main(void) {
        int a, b, c;
        printf("Please, enter three integers separated by commas: ");
        scanf("%d, %d, %d", &a, &b, &c);

        if (a >= 0 && b >= 0 && c >= 0 ) {
                if (a > b && b > c) {
                        printf("The given integers in ascending order are: %d, %d, %d\n", c, b, a);
                } else if (a > c && c > b) {
                        printf("The given integers in ascending order are: %d, %d, %d\n", b, c, a);
                } else if (b > a && a > c) {
                        printf("The given integers in ascending order are: %d, %d, %d\n", c, a, b);
                } else if (b > c && c > a) {
                        printf("The given integers in ascending order are: %d, %d, %d\n", a, c, b);
                } else if (c > a && a > b) {
                        printf("The given integers in ascending order are: %d, %d, %d\n", b, a, c);
                } else if (c > b && b > a) {
                        printf("The given integers in ascending order are: %d, %d, %d\n", a, b, c);
                } else {
                        printf("Please, enter three different integers greater than or equal to zero and separated by commas.\n");
                }
        } else {
                 printf("Please, enter three integers greater than or equal to zero and separated by commas.\n");
        }
        return 0;
}
