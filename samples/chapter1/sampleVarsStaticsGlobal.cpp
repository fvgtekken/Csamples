#include <stdio.h>
#include <string.h>

/* This must all be in one file - preferably by itself. */
static int series_num;

void series_start(int seed);
int series(void);

int main(void)
{

    int chapota;
    series_start(100);
    chapota = series();
    chapota = series();
    chapota = series();
    chapota = series();
    printf("%d", chapota);
    return 0;
}

int series(void)
{
    series_num = series_num + 23;
    return series_num;
}

/* initialize series_num */
void series_start(int seed)
{
    series_num = seed;
}
