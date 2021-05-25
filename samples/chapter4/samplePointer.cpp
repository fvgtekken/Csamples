#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main (void) {

int *p;
int sample[10];

sample[0]=99;
p = sample;

printf("%d", p[0]);

return 0;

}