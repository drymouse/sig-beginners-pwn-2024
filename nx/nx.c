#include <stdio.h>
#include <stdlib.h>

int main() {
	char buf[0x10];
	printf("buf address is %p\n", buf);
	scanf("%s", buf);
	printf("%s\n", buf);
	return 0;
}
