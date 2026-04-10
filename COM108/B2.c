#include <stdio.h>

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int tongDuongLe(int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] % 2 != 0) s += a[i];
    }
    return s;
}

int viTriCuoi(int a[], int n, int x) {
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == x) return i;
    }
    return -1; // Không tìm thấy
}

int main() {
    int a[200], n, x;
    do {
        printf("Nhap n (0 < n <= 200): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 200);

    nhapMang(a, n);
    printf("Mang vua nhap: ");
    xuatMang(a, n);

    printf("Nhap x de liet ke cac so lon hon x: ");
    scanf("%d", &x);
    printf("Cac so lon hon %d: ", x);
    for (int i = 0; i < n; i++) if (a[i] > x) printf("%d ", a[i]);
    printf("\n");

    printf("Tong cac phan tu duong le: %d\n", tongDuongLe(a, n));

    printf("Nhap x can tim vi tri cuoi: ");
    scanf("%d", &x);
    int vt = viTriCuoi(a, n, x);
    if (vt != -1) printf("Vi tri cuoi cung cua %d la: %d\n", x, vt);
    else printf("Khong tim thay %d trong mang.\n", x);

    return 0;
}