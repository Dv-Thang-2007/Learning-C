#include <stdio.h>
#include <string.h>
struct nhanvien {
        int MANV;
        char HoTen[50];
        int SoNgayCong;
        int Luong;
};
typedef struct nhanvien nhanvien;

float TinhLuong(int snc) {
    float luongNgay = 1500000 /25;
    if (snc == 25) {
        return 1500000;
    }
    else if (snc < 25) {
        return 1500000 * 0.9; //giam 10%
    }
    else { //snc>25
        int du = snc - 25;
        return 1500000 + du * luongNgay * 2;
    }
}

void nhapNV(nhanvien ds[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap nhan vien %d ---\n", i + 1);
        printf("Ma NV: ");
        scanf("%d", &ds[i].MANV);
        getchar();
        printf("Ho Ten: ");
        gets(ds[i].HoTen);
        printf("So ngay cong: ");
        scanf("%d", &ds[i].SoNgayCong);
        ds[i].Luong = TinhLuong(ds[i].SoNgayCong);
    }
}

//nhap
void nhanNV() {
    int n = 5;
    struct nhanvien ds[5];
    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap nhan vien %d ---\n", i + 1);
        printf("Ma NV: ");
        scanf("%d", &ds[i].MANV);
        getchar();
        printf("Ho Ten: ");
        gets(ds[i].HoTen);
        printf("So Ngay Cong: ");
        scanf("%d", &ds[i].SoNgayCong);
    }
}

//sap xep
void sapXep(nhanvien ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].MANV > ds[j].MANV) {
                struct nhanvien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

// xuat danh sach
void xuatNV(nhanvien ds[], int n) {
    printf("\ndanh sach nhan vien tang dan\n");
    printf("\n%-10s %-20s %-15s %-15s\n", "MANV", "HoTen", "SoNgayCong", "Luong");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-15d %-15d\n",
               ds[i].MANV, ds[i].HoTen, ds[i].SoNgayCong, ds[i].Luong);
    }
    printf("\n------------------------------------------------\n");
}


int main() {
    nhanvien ds[5];
    int n = 5;
    nhapNV(ds, n);
    printf("\n=== Danh sach nhan vien vua nhap ===\n");
    xuatNV(ds, n);
    sapXep(ds, n);
    printf("\n=== Danh sach sau khi sap xep theo MANV ===\n");
    xuatNV(ds, n);
    return 0;
}
