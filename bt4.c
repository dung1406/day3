#include <stdio.h>
#include <string.h>

struct NguoiDung {
    char hoTen[100];
    int tuoi;
    char gioiTinh[10];
    char thanhPho[50];
    char maBuuDien[20];
    char honNhan[20];
    float mucLuong;
};

int main() {
    struct NguoiDung user;
    printf("Nhap ho ten: ");
    fgets(user.hoTen, sizeof(user.hoTen), stdin);
    user.hoTen[strcspn(user.hoTen, "\n")] = 0;
    printf("Nhap tuoi: ");
    scanf("%d", &user.tuoi);
    getchar();
    printf("Nhap gioi tinh (Nam/Nu): ");
    fgets(user.gioiTinh, sizeof(user.gioiTinh), stdin);
    user.gioiTinh[strcspn(user.gioiTinh, "\n")] = 0;
    printf("Nhap thanh pho: ");
    fgets(user.thanhPho, sizeof(user.thanhPho), stdin);
    user.thanhPho[strcspn(user.thanhPho, "\n")] = 0;
    printf("Nhap ma buu dien: ");
    fgets(user.maBuuDien, sizeof(user.maBuuDien), stdin);
    user.maBuuDien[strcspn(user.maBuuDien, "\n")] = 0;
    printf("Tinh trang hon nhan (Doc than/Da ket hon): ");
    fgets(user.honNhan, sizeof(user.honNhan), stdin);
    user.honNhan[strcspn(user.honNhan, "\n")] = 0;
    printf("Nhap muc luong: ");
    scanf("%f", &user.mucLuong);
    getchar();
    printf("\nTHONG TIN DA NHAP:\n");
    printf("Ho ten: %s\n", user.hoTen);
    printf("Tuoi: %d\n", user.tuoi);
    printf("Gioi tinh: %s\n", user.gioiTinh);
    printf("Thanh pho: %s\n", user.thanhPho);
    printf("Ma buu dien: %s\n", user.maBuuDien);
    printf("Tinh trang hon nhan: %s\n", user.honNhan);
    printf("Muc luong: %.2f\n", user.mucLuong);
    getchar();
    return 0;
}
