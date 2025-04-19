#include <stdio.h>

struct HinhChuNhat {
    int cd, cr, dt;
};

int dientich(struct HinhChuNhat hcn) {
    return hcn.cd * hcn.cr;
}

void kq() {
    struct HinhChuNhat hcn;
    printf("Nhap chieu dai: ");
    scanf("%d", &hcn.cd);
    printf("Nhap chieu rong: ");
    scanf("%d", &hcn.cr);
    hcn.dt = dientich(hcn);
    printf("\nChieu dai: %d\n", hcn.cd);
    printf("Chieu rong: %d\n", hcn.cr);
    printf("Dien tich: %d\n", hcn.dt);
}

int main() {
    kq();
    getchar();
    getchar();
    return 0;
}
