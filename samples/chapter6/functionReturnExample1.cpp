#include <string.h>
// contains printf();
#include <stdio.h>

void pr_reverse(const char *s);

int main(void) {
    pr_reverse("I like C++");
    return 0;
}

void pr_reverse(const char *s) {
    register int t;
    for(t=strlen(s)-1; t>=0; t--) putchar(s[t]);
}