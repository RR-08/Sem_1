#include <stdio.h>

static int addDigits(int num) {
        return num - (num - 1) / 9 * 9;
    }

int main(void)
{
    int n = 12;
    printf("\nInitial number is %d, Single digit number is %d.", n, addDigits(n));
    n = 47;
    printf("\n\nInitial number is %d, Single digit number is %d.", n, addDigits(n));
    return 0;
}
