#include <stdio.h>

void tinhTongVaTich(int a, int b, int *tong, int *tich) {
    *tong = a + b;
    *tich = a * b;
}

int main() {
    int x = 4, y = 5;
    int tong, tich;
    tinhTongVaTich(x, y, &tong, &tich);
    printf("Hai so %d va %d co:\n", x, y);
    printf("Tong: %d\n", tong);
    printf("Tich: %d\n", tich);
    getchar();
    getchar();
    return 0;
}
