#include <stdio.h>
#include <string.h>

// static Variables

/* static variables are permanent variables within their own function or file. Unlike global
variables, they are not known outside their function or file, but they maintain their
values between calls. This feature makes them useful when you write generalized
functions and function libraries that other programmers may use. static has different
effects upon local variables and global variables. */

int series(void);

int main(void)
{
    int chapota;
    chapota = series();
    chapota = series();
    chapota = series();

    printf("%d", chapota);

    return 0;
}

int series()
{
    static int series_num = 100;
    series_num = series_num + 23;
    return series_num;
}
