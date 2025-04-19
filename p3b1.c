#include <stdio.h>

struct addition {
    int num1;
    int num2;
    int sum;
};

int main() {
    struct addition data;
    printf("Nhap so thu nhat: ");
    scanf("%d", &data.num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &data.num2);
    data.sum = data.num1 + data.num2;
    printf("Tong cua %d + %d la %d\n", data.num1, data.num2, data.sum);
    getchar();
    getchar();
    return 0;
}
