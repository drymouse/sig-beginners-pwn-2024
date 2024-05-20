#include <stdio.h>
#include <stdlib.h>

int main() {
    char buf[0x40];
    fgets(buf, 0x40, stdin);
    printf("%s", buf);
    return 0;
}