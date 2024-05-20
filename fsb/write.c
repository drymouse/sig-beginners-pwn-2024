#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    printf("i = %d\n", i);
    printf("Hello World!\n%n", &i);
    printf("i = %d\n", i);
    return 0;
}