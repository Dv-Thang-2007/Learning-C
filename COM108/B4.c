#include <stdio.h>
#include <string.h>

// Bài 4.1: Khai báo cấu trúc
typedef struct {
    char ma[20];
    char ten[50];
    int soTinChi;
} MonHoc;

// Bài 4.2: Nhập danh sách
void nhapDS(MonHoc ds[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap mon hoc thu %d:\n", i + 1);
        printf(" - Ma mon: "); scanf("%s", ds[i].ma);
        getchar(); // Xóa bộ đệm
        printf(" - Ten mon: "); fgets(ds[i].ten, 50, stdin);
        ds[i].ten[strcspn(ds[i].ten, "\n")] = '\0'; // Xóa ký tự xuống dòng
        printf(" - So tin chi: "); scanf("%d", &ds[i].soTinChi);
    }
}

int main() {
    MonHoc ds[50];
    int n;
    printf("Nhap so luong mon hoc: ");
    scanf("%d", &n);

    nhapDS(ds, n);

    // Bài 4.3: Xuất môn học có số tín chỉ cao nhất
    int maxSTC = ds[0].soTinChi;
    for (int i = 1; i < n; i++) {
        if (ds[i].soTinChi > maxSTC) maxSTC = ds[i].soTinChi;
    }

    printf("\nCac mon hoc co so tin chi cao nhat (%d tin chi):\n", maxSTC);
    for (int i = 0; i < n; i++) {
        if (ds[i].soTinChi == maxSTC) {
            printf("Ma: %s | Ten: %s\n", ds[i].ma, ds[i].ten);
        }
    }

    return 0;
}