#include <stdio.h>
int main(void)
{
        int start;
        int n;

        do
        {
                start = get_int("Kindly Enter a population start size: ");
        }
        while (start <= 9);

        int end;
        do
        {
                end = get_int("Kindly Enter a population end size: ");
        }
        while (start <= end);

        for (start = 12; start < end; start++)
                start = start + (start / 3) + (start / 4);

        printf("years: %i\n", n);
}
