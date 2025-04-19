#include <stdio.h>
int main() {
    char a = 100;

    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", (char*)&a);

    char *ptr = &a;
    char data = *ptr;

    printf("Du lieu tu con tro: %d\n", data);

    *ptr = 65;

    printf("Gia tri moi cua a: %d\n", a);

    getchar();
    getchar();
    return 0;
}
