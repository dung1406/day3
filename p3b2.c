#include <stdio.h>

struct HinhChuNhat {
    int cd, cr, dt;
};

int main() {
    struct HinhChuNhat hcn;
    printf("Nhap chieu dai: ");
    scanf("%d", &hcn.cd);
    printf("Nhap chieu rong: ");
    scanf("%d", &hcn.cr);
    hcn.dt = hcn.cd * hcn.cr;
    printf("Chieu dai: %d\n", hcn.cd);
    printf("Chieu rong: %d\n", hcn.cr);
    printf("Dien tich: %d\n", hcn.dt);
    getchar();
    getchar();
    return 0;
}
