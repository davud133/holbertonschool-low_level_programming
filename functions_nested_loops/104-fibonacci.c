#include <stdio.h>

int main(void)
{
    unsigned long a_low = 1, b_low = 2;
    unsigned long a_high = 0, b_high = 0;
    unsigned long next_low, next_high;
    unsigned long base = 1000000000;
    int i;

    printf("1, 2");

    for (i = 3; i <= 98; i++)
    {
        next_low = a_low + b_low;
        next_high = a_high + b_high;

        if (next_low >= base)
        {
            next_low -= base;
            next_high += 1;
        }

        if (next_high > 0)
            printf(", %lu%09lu", next_high, next_low);
        else
            printf(", %lu", next_low);

        a_low = b_low;
        a_high = b_high;
        b_low = next_low;
        b_high = next_high;
    }

    printf("\n");

    return 0;
}

