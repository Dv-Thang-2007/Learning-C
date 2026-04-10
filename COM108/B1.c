#include <stdio.h>

int main() {
    int n, sum = 0;
    // Kiểm tra điều kiện nhập n có tối đa 3 chữ số
    do {
        printf("Nhap n (0-999): ");
        scanf("%d", &n);
        if (n < 0 || n > 999) printf("Nhap sai, moi nhap lai!\n");
    } while (n < 0 || n > 999);

    int temp = n;
    while (temp > 0) {
        sum += temp % 10; // Lấy chữ số hàng đơn vị
        temp /= 10;       // Bỏ chữ số hàng đơn vị
    }

    printf("Tong cac chu so cua %d la: %d\n", n, sum);
    return 0;
}