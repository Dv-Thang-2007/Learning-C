#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define N 100
struct SinhVien {
    char masv[10];
    char tensv[50];
    float diem;
};
typedef struct SinhVien sv;

void nhapSV(sv ds[],int n) {
    int flag;
    for (int i = 0; i < n; i++){    
        printf("Ma SV: ");
        fgets(ds[i].masv, 10, stdin);
        ds[i].masv[strcspn(ds[i].masv, "\n")] = '\0';
        printf("Ho Ten: ");
        fgets(ds[i].tensv, 50, stdin);
        ds[i].tensv[strcspn(ds[i].tensv, "\n")] = '\0';
        printf("So diem: ");
        scanf("%d", &ds[i].diem);
    }
}
void xuatSV(sv ds[],int n) {
    printf("\ndanh sach sinh vien \n");
    printf("\n%-10s %-20s %-15s \n", "MANV", "HoTen", "Diem");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-15d \n",
               ds[i].masv, ds[i].tensv, ds[i].diem);
    }
    printf("\n------------------------------------------------\n");
}
int main(){
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    getchar();
    struct SinhVien ds[n];
    nhapSV(ds,n);
    xuatSV(ds,n);
    return 0;
}