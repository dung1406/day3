#include <stdio.h>

// Ham hoan doi - Truyen theo gia tri
void hoandoigt(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Trong ham hoan doi truyen gia tri: a = %d, b = %d\n", a, b);
}

// Ham hoan doi - Truyen theo tham chieu
void hoandoitc(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Trong ham hoan doi truyen tham chieu: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 3, y = 7;
    printf("Ban dau: x = %d, y = %d\n", x, y);

    // Goi ham truyen theo gia tri
    hoandoigt(x, y);
    printf("Sau ham doi truyen gia tri: x = %d, y = %d\n", x, y);

    // Goi ham truyen theo tham chieu
    hoandoitc(&x, &y);
    printf("Sau ham doi truyen tham chieu: x = %d, y = %d\n", x, y);

    getchar();
    getchar();
    return 0;
}
