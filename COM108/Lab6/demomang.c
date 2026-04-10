#include <stdio.h>
#define N 50
#define M 50
// Hàm nhập mảng 2 chiều
void nhapmang2c(int n, int m, int mang[N][M]) {
    printf("\nNhap ma tran (%dx%d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
}
// Hàm tính tổng các phần tử chia hết cho 3
float tinhtongchiahet3(int n, int m, int mang[N][M]) {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mang[i][j] % 3 == 0) {
                tong += mang[i][j];
            }
        }
    }
    return tong;
}
// Hàm xuất mảng 2 chiều
void xuatmang2c(int n, int m, int mang[N][M]) {
    printf("\nMa tran da nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d ", mang[i][j]); 
        }
        printf("\n");
    }
}
int main() {
    int n, m;
    printf("Nhap so hang (N <= %d): ", N);
    scanf("%d", &n);
    printf("Nhap so cot (M <= %d): ", M);
    scanf("%d", &m);
    int mang[N][M];
    float tong = 0;
    nhapmang2c(n, m, mang);
    tong = tinhtongchiahet3(n, m, mang);
    xuatmang2c(n, m, mang);
    printf("\nTong cac phan tu chia het cho 3 la: %.2f\n", tong);
    return 0;
}